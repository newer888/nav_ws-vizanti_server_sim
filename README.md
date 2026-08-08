# 🤖 机器人仿真系统 - 安装与使用手册

# 🤖 机器人仿真系统 - 安装与使用手册

## 📋 目录

*   [1. 项目概述](#1-%E9%A1%B9%E7%9B%AE%E6%A6%82%E8%BF%B0)
    
*   [2. 系统要求](#2-%E7%B3%BB%E7%BB%9F%E8%A6%81%E6%B1%82)
    
*   [3. 文件结构说明](#3-%E6%96%87%E4%BB%B6%E7%BB%93%E6%9E%84%E8%AF%B4%E6%98%8E)
    
*   [4. 环境安装](#4-%E7%8E%AF%E5%A2%83%E5%AE%89%E8%A3%85)
    
*   [5. 编译项目](#5-%E7%BC%96%E8%AF%91%E9%A1%B9%E7%9B%AE)
    
*   [6. 启动仿真系统（详细步骤）](#6-%E5%90%AF%E5%8A%A8%E4%BB%BF%E7%9C%9F%E7%B3%BB%E7%BB%9F%E8%AF%A6%E7%BB%86%E6%AD%A5%E9%AA%A4)
    
*   [7. Vizanti Web界面使用指南](#7-vizanti-web%E7%95%8C%E9%9D%A2%E4%BD%BF%E7%94%A8%E6%8C%87%E5%8D%97)
    
*   [8. 常见问题与解决方案](#8-%E5%B8%B8%E8%A7%81%E9%97%AE%E9%A2%98%E4%B8%8E%E8%A7%A3%E5%86%B3%E6%96%B9%E6%A1%88)
    
*   [9. 配置文件详解](#9-%E9%85%8D%E7%BD%AE%E6%96%87%E4%BB%B6%E8%AF%A6%E8%A7%A3)
    
*   [10. 高级功能](#10-%E9%AB%98%E7%BA%A7%E5%8A%9F%E8%83%BD)
    

---

## 1. 项目概述

### 1.1 项目简介

本项目是一个基于 **ROS2 Humble + Gazebo** 的完整机器人导航仿真系统，包含以下核心功能：

| 功能模块 | 说明 |
| --- | --- |
| **Gazebo 仿真环境** | 物理引擎驱动的机器人仿真，包含激光雷达、IMU、里程计等传感器 |
| **AMCL 定位** | 自适应蒙特卡洛定位，支持自动初始位姿设置 |
| **Nav2 导航栈** | 完整的导航系统，包含全局规划器、局部控制器、行为树等 |
| **Vizanti Web界面** | 基于Web的机器人控制界面，支持单点导航、线路导航、巡逻任务 |
| **TaskManager 任务管理** | 支持多waypoint巡逻任务的执行与管理 |
| **MQTT 通信协议** | 基于Mosquitto的消息中间件，实现Vizanti与TaskManager通信 |

### 1.2 技术栈

```plaintext
操作系统: Ubuntu 22.04 LTS (推荐)
ROS版本: ROS2 Humble Hawksbill
仿真引擎: Gazebo Ignition Fortress (或 Gazebo Classic)
消息代理: Mosquitto MQTT Broker v2.x
Web框架: Flask (Python 3.x)
导航算法: Nav2 + A* + DWB Controller + FixedPathRoute (路网导航)

```

### 1.3 功能特性

✅ **自动初始定位**: AMCL启动后自动设置初始位姿，无需手动操作   ✅ **路网导航**: 支持沿预定义路线导航（已为当前地图生成45个路网点）   ✅ **自由导航**: 当目标点不在路网附近时，自动切换到A\*全局规划   ✅ **Web控制**: 通过浏览器 http://localhost:5000 控制机器人   ✅ **巡逻任务**: 支持创建和执行多点巡逻路线   ✅ **实时状态**: 导航状态实时反馈到Web界面

---

## 2. 系统要求

### 2.1 硬件要求

| 组件 | 最低配置 | 推荐配置 |
| --- | --- | --- |
| **CPU** | Intel i5-8代 或 AMD Ryzen 5 | Intel i7-10代 或 AMD Ryzen 7 |
| **内存** | 8 GB RAM | 16 GB RAM |
| **硬盘** | 50 GB 可用空间 | SSD 100GB+ |
| **显卡** | 集成显卡（Gazebo可能卡顿） | NVIDIA GTX 1060+ (推荐) |
| **网络** | 本地网络（用于MQTT） | \- |

### 2.2 软件依赖

#### 必须安装的软件包：

```bash
# Ubuntu 22.04 基础系统
sudo apt update && sudo apt upgrade -y

# ROS2 Humble
sudo apt install ros-humble-desktop-full python3-colcon-common-extensions \
    python3-rosdep python3-vcstool git wget curl vim -y

# Gazebo 仿真相关
sudo apt install ros-humble-gazebo-ros-pkgs ros-humble-gazebo-ros2-control \
    ros-humble-xacro ros-humble-joint-state-publisher-gui \
    ros-humble-robot-state-publisher -y

# Nav2 导航栈
sudo apt install ros-humble-nav2-* ros-humble-navigation2 -y

# MQTT 消息代理
sudo apt install mosquitto mosquitto-clients -y

# Python 依赖
pip3 install flask paho-mqtt pyyaml numpy scipy pillow opencv-python-headless

# 编译工具
sudo apt install build-essential cmake pkg-config libeigen3-dev -y

```

#### 开发工具（可选）：

```bash
# VS Code + ROS插件
code --install-extension ms-iot.vscode-ros

# Git图形化工具
sudo apt install gitk gitg -y

```
---

## 3. 文件结构说明

### 3.1 解压后的目录结构

```plaintext
robot_simulation_package/          # 根目录
├── nav_ws_gazebo/                 # ROS2工作空间源码 (主代码)
│   └── src/
│       ├── gac_navigation2/       # Nav2导航栈定制版
│       │   ├── gac_nav2_bringup/  # Nav2启动文件
│       │   ├── gac_nav2_planner/  # 全局路径规划器
│       │   ├── gac_nav2_controller/# 局部控制器(DWB)
│       │   ├── gac_nav2_costmap_2d/# 代价地图
│       │   ├── gac_nav2_bt_navigator/# 行为树导航
│       │   ├── nav2_fixed_path_route/# 路网导航插件(自定义)
│       │   ├── nav2_navfn_planner/# A*规划器
│       │   └── ...                # 其他Nav2组件
│       ├── gac_robot_task/        # TaskManager任务管理器
│       ├── mqtt_nav_control_cpp/  # MQTT控制节点(C++)
│       ├── nav_status_bridge/     # 导航状态桥接节点
│       ├── record_path/           # 路径录制工具
│       └── road_network_collection_py/# 路网采集工具(Python)
├── sim/                           # Gazebo仿真环境
│   ├── robot_relate/              # 机器人模型与launch文件
│   │   ├── urdf/fishbot/         # 机器人URDF描述(xacro格式)
│   │   ├── launch/gazebo_sim.launch.py # Gazebo启动
│   │   ├── world/custom_room.world      # 仿真世界文件
│   │   └── maps/room.pgm room.yaml     # 默认地图(不使用)
│   ├── defender_3a/               # 3A机器人模型(STL网格)
│   ├── sim_amcl_bringup/          # AMCL定位启动包
│   │   ├── launch/amcl_launch.py  # AMCL启动文件
│   │   ├── params/amcl_params.yaml# AMCL参数(含自动初始位姿)
│   │   └── maps/                  # 地图备份
│   └── robot_relate_python/       # Python工具脚本
│       └── robot_relate_python/
│           ├── navigation_to_pose.py  # 单点导航脚本
│           ├── set_initpose.py        # 设置初始位姿
│           ├── cancel_navigation.py   # 取消导航
│           └── waypoint_follow.py     # 跟随航点
├── vizanti_server/                # Vizanti Web服务器
│   └── src/vizanti/vizanti_server/    # Flask应用
│       ├── server.py             # 主服务器入口
│       ├── scripts/controller/patrol_controller.py # 巡逻管理
│       └── static/               # 前端资源
├── robot_config/                  # 运行时配置文件
│   └── robot_1/
│       ├── tour_tasks.xml        # 巡逻任务定义(Vizanti自动生成)
│       ├── patrol.sqlite3        # 巡逻数据库
│       └── tour_tasks.manual_editing.xml # 手动编辑的任务模板
└── user_space/nav/robot-nav/      # 用户数据目录
    ├── nav_data/loc_map/grid_map/ # 地图文件
    │   ├── default.pgm           # 地图像素数据(PGM格式,376x222像素)
    │   └── default.yaml          # 地图元数据(分辨率:0.05m/pixel,原点:[-10.4,-6.53])
    └── robot_config/robot_1/     # Nav2参数配置
        ├── gac_nav2_params.yaml  # Nav2核心配置(规划器、代价地图、行为树等)
        ├── path_default.json     # 路网数据(45个点,15.53米总长)
        ├── keepout/keepout.geojson # 禁区区域(GeoJSON格式)
        └── maps/                 # 地图副本
            ├── default.pgm
            └── default.yaml

```

### 3.2 关键文件说明

| 文件路径 | 用途 | 是否需要修改 |
| --- | --- | --- |
| `sim/sim_amcl_bringup/params/amcl_params.yaml` | AMCL定位参数，含自动初始位姿 | ⚠️ 如修改Gazebo出生位置需同步 |
| `user_space/nav/robot-nav/robot_config/robot_1/gac_nav2_params.yaml` | Nav2导航栈全部参数 | ⚠️ 调试时常用 |
| `user_space/nav/robot-nav/robot_config/robot_1/path_default.json` | 路网坐标数据 | ✅ 可重新录制 |
| `robot_config/robot_1/tour_tasks.xml` | 巡逻任务定义 | ❌ Vizanti自动管理 |
| `sim/robot_relate/launch/gazebo_sim.launch.py` | Gazebo启动文件 | ⚠️ 修改spawn位置时需改 |
| `src/install/gac_nav2_bt_navigator/share/gac_nav2_bt_navigator/behavior_trees/13_test.xml` | 行为树定义 | ⚠️ 高级用户可修改 |

---

## 4. 环境安装

### 4.1 第一步：解压打包文件

```bash
# 将 robot_simulation_package.tar.gz 复制到你的工作目录
cd ~/
cp /path/to/robot_simulation_package.tar.gz ./

# 解压
tar -xzvf robot_simulation_package.tar.gz

# 进入目录
cd ~/simulation_package
ls -la
# 应该看到: nav_ws_gazebo/ sim/ vizanti_server/ robot_config/ user_space/

```

### 4.2 第二步：建立符号链接（重要！）

**原因**：部分代码中硬编码了 `/home/zr/code/src` 和 `/user_space/nav/robot-nav` 路径。

```bash
# 创建工作目录结构
mkdir -p ~/code/src

# 移动源码到标准位置
mv ~/simulation_package/nav_ws_gazebo ~/code/src/
mv ~/simulation_package/sim ~/code/src/
mv ~/simulation_package/vizanti_server ~/code/src/

# 创建user_space符号链接
sudo mkdir -p /user_space/nav/robot-nav
sudo chown $USER:$USER /user_space/nav/robot-nav
cp -r ~/simulation_package/user_space/* /user_space/nav/

# 复制运行时配置
mkdir -p ~/code/robot_config/robot_1
cp -r ~/simulation_package/robot_config/* ~/code/robot_config/robot_1/

# 清理解压目录(可选)
rm -rf ~/simulation_package ~/robot_simulation_package.tar.gz

# 验证
ls ~/code/src/  # 应看到: nav_ws_gazebo/ sim/ vizanti_server/
ls /user_space/nav/robot-nav/  # 应看到: nav_data/ robot_config/
ls ~/code/robot_config/robot_1/  # 应看到: tour_tasks.xml patrol.sqlite3

```

### 4.3 第三步：初始化ROS2环境

```bash
# 如果是首次安装ROS2，需要初始化rosdep
sudo rosdep init
rosdep update

# 配置shell环境(bash用户)
echo "source /opt/ros/humble/setup.bash" >> ~/.bashrc
source ~/.bashrc


# 验证ROS2安装
ros2 --version
# 应输出: 2.0.x (humble)

```
---

## 5. 编译项目

### 5.1 编译所有包

```bash
cd ~/code/src

# 首次编译（耗时约10-20分钟）
colcon build --symlink-install \
    --packages-up-to nav_status_bridge \
    --cmake-args -DCMAKE_BUILD_TYPE=Release

# 或者编译特定包（快速测试）
colcon build --packages-select sim_amcl_bringup
colcon build --packages-select gac_robot_task
colcon build --packages-select mqtt_nav_control_cpp
colcon build --packages-select nav_status_bridge
colcon build --packages-select vizanti_server

```

### 5.2 解决编译常见问题

#### 问题1：缺少Python依赖

```bash
pip3 install empy pyyaml lark numpy scipy

```

#### 问题2：缺少系统库

```bash
sudo apt install libbullet-dev libsdformat-dev libignition-math6-dev \
    libignition-msgs8-dev libignition-transport11-dev \
    libignition-common3-dev libignition-fuel-tools7-dev -y

```

#### 问题3：CMake找不到Eigen3

```bash
export CMAKE_PREFIX_PATH=/usr/lib/cmake/eigen3:$CMAKE_PREFIX_PATH

```

### 5.3 编译成功验证

```bash
source ~/code/src/install/setup.bash

# 检查关键包是否安装成功
find ~/code/src/install -name "gac_robot_task_node" -o -name "status_bridge_node" \
    -o -name "mqtt_nav_control_node" | head -10

# 应该找到这些可执行文件

```
---

## 6. 启动仿真系统（详细步骤）

### ⚠️ 重要提示

**必须严格按照顺序启动，每个步骤等待完成后再进行下一步！**

### 📋 启动清单（共需7个终端窗口）

| 终端编号 | 功能 | 预计启动时间 | 关键日志标志 |
| --- | --- | --- | --- |
| 1 | Gazebo 仿真 | 30秒 | 窗口打开，机器人在原点 |
| 2 | AMCL 定位 | 10秒 | `Managed nodes are active` |
| 3 | Vizanti Web | 5秒 | `Running on http://0.0.0.0:5000\` |
| 4 | Nav2 导航栈 | 15秒 | `All requested nodes are active` |
| 5 | TaskManager | 3秒 | `Connected to MQTT broker` |
| 6 | Status Bridge | 2秒 | `Status Bridge Node initialized successfully` |
| 7 | MQTT控制节点 | 2秒 | `Connected to MQTT broker` |

---

### 🔧 终端1：启动 Gazebo 仿真环境

```bash
cd ~/code/src
source /opt/ros/humble/setup.bash
source ./install/setup.bash

ros2 launch robot_relate gazebo_sim.launch.py

```

**预期现象：**

*   ✅ Gazebo仿真窗口打开
    
*   ✅ 机器人出现在坐标系原点附近 `(0, 0, 0)`
    
*   ✅ 机器人的激光雷达开始扫描（显示红色射线）
    
*   ✅ 终端输出类似：
    

**如果失败：**

*   ❌ `Package 'robot_relate' not found` → 运行 `colcon build --packages-select robot_relate`
    
*   ❌ Gazebo窗口黑屏 → 检查显卡驱动，尝试 `export LIBGL_ALWAYS_SOFTWARE=1`
    
*   ❌ 找不到URDF → 检查 `~/code/src/sim/robot_relate/urdf/fishbot/` 目录存在
    

**等待确认后再开下一个终端！**

---

### 🎯 终端2：启动 AMCL 定位

```bash
cd ~/code/src
source /opt/ros/humble/setup.bash
source ./install/setup.bash

ros2 launch sim_amcl_bringup amcl_launch.py \
    map:=/user_space/nav/robot-nav/nav_data/loc_map/grid_map/default.yaml

```

**预期现象（等待约10秒）：**

*   ✅ 日志显示 `Received a 376 X 222 map @ 0.050 m/pix`
    
*   ✅ 日志显示 `Managed nodes are active`
    
*   ✅ **不再出现** `Please set the initial pose` 警告！（因为已启用自动初始位姿）
    
*   ✅ TF树建立：`map → odom → base_footprint → base_link`
    

**关键配置（已预设）：**

```yaml
# sim/sim_amcl_bringup/params/amcl_params.yaml
set_initial_pose: true  # 自动设置初始位姿
initial_pose:
  x: 0.0               # 对应Gazebo中的spawn位置
  y: 0.0
  z: 0.0
  yaw: 0.0

```

**如果失败：**

*   ❌ `'utf-8' codec can't decode byte` → 检查amcl\_params.yaml是否包含中文注释，删除中文即可
    
*   ❌ `Please set the initial pose` 反复出现 → 检查 `set_initial_pose: true` 参数是否存在
    
*   ❌ 地图加载失败 → 确认 `/user_space/nav/robot-nav/nav_data/loc_map/grid_map/default.pgm` 存在
    

**等待确认后再开下一个终端！**

---

### 🌐 终端3：启动 Vizanti Web 界面

```bash
cd ~/code/src
source /opt/ros/humble/setup.bash
source ./install/setup.bash

ros2 launch vizanti_server vizanti_server.launch.py

```

**预期现象（等待约5秒）：**

*   ✅ 日志显示 `Running on http://0.0.0.0:5000\`
    
*   ✅ 打开浏览器访问：http://localhost:5000
    
*   ✅ **地图立即显示**（无需手动设置初始位姿！）
    
*   ✅ 可以看到机器人的位置标记（红色箭头）
    

**如果地图不显示：**

1.  刷新浏览器页面（F5）
    
2.  检查TF树：在终端运行 `ros2 run tf2_tools view_frames` 查看 `frames.pdf`
    
3.  确认AMCL已经完全激活（终端2中无错误日志）
    

**Vizanti功能介绍：**

*   📍 **单点导航**：点击地图上任意位置 → 点击"导航到此位置"
    
*   🛣️ **线路导航**：点击"巡逻管理" → 创建路线 → 添加多个waypoint → 开始巡逻
    
*   🚫 **停止导航**：点击"取消当前任务"按钮
    
*   📊 **实时状态**：右侧面板显示机器人速度、电量、导航状态
    

**等待确认后再开下一个终端！**

---

### 🧭 终端4：启动 Nav2 导航栈

```bash
cd ~/code/src
source /opt/ros/humble/setup.bash
source ./install/setup.bash

ros2 launch gac_nav2_bringup bringup_launch.py \
    map:=/user_space/nav/robot-nav/nav_data/loc_map/grid_map/default.yaml

```

**预期现象（等待约15秒）：**

*   ✅ 日志显示 `[planner_server]: Loaded 45 points from road network.` （路网加载成功）
    
*   ✅ 日志显示 `All requested nodes are active` （所有节点激活）
    
*   ✅ 无 `timeout` 错误信息
    

**Nav2组件列表：**

```plaintext
map_server          - 地图服务器
planner_server      - 全局路径规划器(A* + FixedPathRoute)
controller_server   - 局部控制器(DWB)
bt_navigator        - 行为树导航器
behavior_server     - 行为服务器
smoother_server     - 路径平滑器
collision_monitor   - 碰撞监测
waypoint_follower   - 路点跟随器
velocity_smoother   - 速度平滑器
lifecycle_manager_navigation - 生命周期管理器

```

**如果失败：**

*   ❌ `failed to send response... timeout` → 有重复进程，先清理：`pkill -9 -f "nav2\|lifecycle"`
    
*   ❌ `GridBased is not a valid planner` → 检查 `gac_nav2_params.yaml` 中 `planner_plugins` 配置
    
*   ❌ `Road network is empty` → 检查 `path_default.json` 文件存在且非空
    

**等待确认后再开下一个终端！**

---

### 📋 终端5：启动 TaskManager（任务管理器）

```bash
cd ~/code/src
source /opt/ros/humble/setup.bash
source ./install/setup.bash

ros2 run gac_robot_task gac_robot_task_node \
    --ros-args \
    -p config_path:=/home/zr/code/robot_config/robot_1/tour_tasks.xml

```

**⚠️ 注意：config\_path 必须指向正确路径！**

**预期现象（等待约3秒）：**

*   ✅ 显示版本信息：
    
*   ✅ 日志显示 `Task Manager initialized`
    
*   ✅ 日志显示 `Connected to MQTT broker` （连接到本地Mosquitto）
    
*   ✅ 日志显示 `Waiting for new task` （等待接收任务）
    

**如果失败：**

*   ❌ `Failed to load XML file:` 后面为空 → **漏掉了** `**-p config_path:=...**` **参数！**
    
*   ❌ `Task ID not found: xxxxxxxx` → tour\_tasks.xml中的task id与Vizanti发送的不匹配（正常，稍后在Vizanti中重新创建路线即可解决）
    

**等待确认后再开下一个终端！**

---

### 🌉 终端6：启动 Status Bridge（状态桥接）

```bash
cd ~/code/src
source /opt/ros/humble/setup.bash
source ./install/setup.bash

ros2 run nav_status_bridge status_bridge_node

```

**预期现象（等待约2秒）：**

*   ✅ 日志显示 `Status Bridge Node initializing...`
    
*   ✅ 日志显示 `Subscribed to /navigate_to_pose/_action/status`
    
*   ✅ 日志显示 `Publishing to /tour_task_status`
    
*   ✅ 日志显示 `Status Bridge Node initialized successfully`
    

**功能说明：** Status Bridge的作用是将Nav2的内部动作状态转换为外部可读的状态消息（如 'RUNNING', 'IDLE', 'SUCCEEDED', 'ABORTED'），供TaskManager和Vizanti使用。

**等待确认后再开最后一个终端！**

---

### 📡 终端7：启动 MQTT 控制节点

```bash
cd ~/code/src
source /opt/ros/humble/setup.bash
source ./install/setup.bash

ros2 run mqtt_nav_control_cpp mqtt_nav_control_node \
    --ros-args \
    -p mqtt_broker_host:=127.0.0.1 \
    -p mqtt_broker_port:=1883

```

**预期现象（等待约2秒）：**

*   ✅ 日志显示 `Nav2 action server is available`
    
*   ✅ 日志显示 `Connecting to MQTT broker at localhost:1883...`
    
*   ✅ 日志显示 `Subscribed to MQTT voice topic: voice/cmd`
    
*   ✅ 日志显示 `Subscribed to MQTT path topic: path/control`
    
*   ✅ 日志显示 `Connected to MQTT broker`
    

**功能说明：** MQTT Control Node负责监听来自Vizanti的MQTT消息（语音指令、路径控制），并转换为ROS2的动作请求发送给Nav2。

---

## 7. Vizanti Web界面使用指南

### 7.1 访问界面

打开浏览器访问：\*\*http://localhost:5000\*\*

**如果无法访问：**

*   检查终端3是否有 `Running on http://0.0.0.0:5000\` 日志
    
*   尝试用其他浏览器（Chrome/Firefox/Edge）
    
*   检查防火墙是否阻止了5000端口
    

### 7.2 单点导航（Point Navigation）

**操作步骤：**

1.  在地图上**单击左键**选择目标位置
    
2.  出现绿色目标标记
    
3.  点击右下角的 **"Navigate"** 按钮（或按回车键）
    
4.  机器人开始向目标移动
    
5.  右侧状态栏实时显示进度
    

**取消导航：**

*   点击 **"Cancel"** 按钮
    
*   或在终端5中会收到取消指令
    

### 7.3 线路导航（Patrol/Road Network）

**操作步骤：**

1.  点击顶部菜单 **"Patrol"** 或 **"巡逻管理"**
    
2.  进入 **"Routes"** 页面
    
3.  点击 **"+ New Route"** 创建新路线
    
4.  输入路线名称（例如：`w1`）
    
5.  在地图上依次点击添加 **Waypoint**（至少2个点）
    
6.  每个waypoint可以调整位置（拖拽）、删除（点击×按钮）
    
7.  点击 **"Save Route"** 保存路线
    
8.  回到路线列表，点击 **"Start Patrol"** 开始巡逻
    

**Vizanti后台流程：**

```plaintext
用户点击"Start Patrol"
    ↓
Vizanti执行 export_task_xml(route_id):
    1. 将waypoint坐标写入 /home/zr/code/robot_config/robot_1/tour_tasks.xml
    2. task.id = route_id (数据库UUID)
    ↓
Vizanti通过MQTT发送消息:
    topic: robot/task
    payload: {route_id}
    ↓
TaskManager收到消息:
    1. LoadTaskConfig(config_path) → 加载tour_tasks.xml
    2. GetTaskById(payload) → 找到对应的task
    3. 逐个waypoint调用Nav2导航服务
    ↓
机器人开始按路线移动

```

### 7.4 监控导航状态

**右侧状态面板显示：**

*   🤖 **Robot Pose**: 机器人实时位置 (x, y, yaw)
    
*   📏 **Linear Speed**: 线速度 (m/s)
    
*   🔄 **Angular Speed**: 角速度 (rad/s)
    
*   🎯 **Navigation State**:
    
    *   `IDLE` - 空闲
        
    *   `RUNNING` - 导航中
        
    *   `SUCCEEDED` - 到达目标
        
    *   `ABORTED` - 被取消
        
    *   `FAILED` - 失败（遇到障碍物等）
        

---

## 8. 常见问题与解决方案

### 8.1 启动阶段问题

#### 问题1：Gazebo窗口打不开或黑屏

**症状**：终端报错 `libGL error` 或窗口全黑

**解决方案**：

```bash
# 方法1：使用软件渲染
export LIBGL_ALWAYS_SOFTWARE=1
ros2 launch robot_relate gazebo_sim.launch.py

# 方法2：更新显卡驱动
ubuntu-drivers autoinstall
reboot

```
---

#### 问题2：AMCL报 "Please set the initial pose"

**症状**：终端2反复输出警告，地图不显示

**原因**：`amcl_params.yaml` 中缺少自动初始位姿配置

**解决方案**：

```bash
# 编辑文件
vim ~/code/src/sim/sim_amcl_bringup/params/amcl_params.yaml

# 在 sim_amcl -> ros__parameters 下添加:
set_initial_pose: true
initial_pose:
  x: 0.0
  y: 0.0
  z: 0.0
  yaw: 0.0

# 保存后重启AMCL（终端2 Ctrl+C，然后重新运行命令）

```

**注意**：确保文件编码为UTF-8，不要有中文注释！

---

#### 问题3：Nav2启动超时 timeout

**症状**：终端4显示 `failed to send response to /controller_server/change_state (timeout)`

**原因**：存在重复的Nav2进程或lifecycle\_manager进程

**解决方案**：

```bash
# 杀掉所有残留进程
pkill -9 -f "nav2\|lifecycle\|controller_server\|planner_server"

# 确认清理干净
ps aux | grep -E "nav2|lifecycle" | grep -v grep
# 应该没有输出

# 重启Nav2（终端4）

```
---

#### 问题4：Vizanti地图不显示

**症状**：浏览器打开 http://localhost:5000 但看不到地图

**排查步骤**：

```bash
# 1. 检查AMCL是否正常运行
ros2 topic echo /scan --once
# 应该接收到激光扫描数据

# 2. 检查TF树是否完整
ros2 run tf2_tools view_frames
# 打开 frames.pdf，查看是否有 map->odom->base_link 完整链条

# 3. 检查初始位姿是否已设置
ros2 topic echo /pose_with_covariance --once
# 应该接收到位姿数据

# 4. 强制刷新浏览器（Ctrl+F5）

```
---

### 8.2 导航阶段问题

#### 问题5：机器人穿墙导航

**症状**：规划的路径穿过墙壁或障碍物

**原因**：路网数据 (`path_default.json`) 与当前地图不匹配

**解决方案**：

```bash
# 方法1：重新录制路网（推荐）
# 在终端中运行（新终端）：
ros2 topic echo /odom --field pose.pose.position > /tmp/trajectory_raw.txt &
# 用Vizanti驾驶机器人走一圈
# Ctrl+C停止录制
python3 odom_to_road_network.py /tmp/trajectory_raw.txt \
    /user_space/nav/robot-nav/robot_config/robot_1/path_default.json

# 方法2：禁用路网，纯A*导航
# 编辑 gac_nav2_params.yaml，注释掉GridBased规划器
planner_plugins: ["FixedGridBased"]  # 只保留A*
# 同时修改行为树XML中的 planner_id="FixedGridBased"

```
---

#### 问题6：TaskManager报 "Task ID not found"

**症状**：终端5显示 `Task ID not found: xxxxxxxx`

**原因**：Vizanti发送的task id与tour\_tasks.xml中的id不匹配

**解决方案**：

```bash
# 在Vizanti中重新创建巡逻路线：
# 1. 打开 http://localhost:5000
# 2. 进入"巡逻管理"
# 3. 删除旧路线，创建新路线
# 4. 添加waypoint并保存
# 5. 点击"开始巡逻"
# 此时Vizanti会自动更新tour_tasks.xml，ID将匹配

```

**或者手动同步ID**：

```bash
# 查看Vizanti数据库中的最新route_id
sqlite3 ~/code/robot_config/robot_1/patrol.sqlite3 "SELECT id FROM routes ORDER BY created_at DESC LIMIT 1;"

# 将这个ID复制到tour_tasks.xml的<task>标签id属性中

```
---

#### 问题7：机器人停在原地不动

**症状**：导航命令已发出但机器人不移动

**排查步骤**：

```bash
# 1. 检查cmd_vel话题是否有输出
ros2 topic echo /cmd_vel --once
# 应该看到线速度和角速度数值

# 2. 检查Gazebo是否接收到速度命令
# 在Gazebo窗口中观察机器人轮子是否转动

# 3. 检查局部代价地图
ros2 topic echo /local_costmap/costmap --once
# 观察机器人周围是否有被标记为障碍物(254)的区域

# 4. 如果inflation_radius太大，机器人认为到处都是障碍物
# 编辑 gac_nav2_params.yaml 减小 inflation_radius:
local_costmap:
  inflation_layer:
    inflation_radius: 0.35  # 从0.5减小到0.35

```
---

### 8.3 性能优化问题

#### 问题8：Gazebo运行卡顿

**解决方案**：

```bash
# 1. 降低Gazebo实时性因子
export GAZEBO_RT_FACTOR=0.5  # 0.5倍速运行

# 2. 关闭不必要的可视化
# 在Gazebo窗口中：View -> 取消勾选 "Shadows", "Wireframe"

# 3. 减少激光雷达采样数
# 编辑 fishbot.urdf.xacro，减小 <sample_count>

```
---

#### 问题9：CPU占用过高

**解决方案**：

```bash
# 查看占用最高的进程
top -o %CPU

# 通常是因为AMCL粒子数过多或代价地图更新频率太高
# 优化AMCL参数（amcl_params.yaml）：
max_particles: 1000  # 从2000降到1000
min_particles: 200   # 从500降到200

# 优化代价地图更新频率（gac_nav2_params.yaml）：
global_costmap:
  update_frequency: 1.0  # 从5.0降到1.0
local_costmap:
  update_frequency: 5.0  # 从10.0降到5.0

```
---

## 9. 配置文件详解

### 9.1 AMCL参数 (`sim/sim_amcl_bringup/params/amcl_params.yaml`)

```yaml
sim_amcl:
  ros__parameters:
    use_sim_time: true                    # 使用仿真时间
    alpha1: 0.2                           # 运动模型噪声参数
    base_frame_id: "base_footprint"       # 机器人底座坐标系
    global_frame_id: "map"                # 全局坐标系
    laser_model_type: "likelihood_field"  # 激光观测模型
    max_particles: 2000                   # 最大粒子数（影响精度和性能）
    min_particles: 500                    # 最小粒子数
    odom_frame_id: "odom"                 # 里程计坐标系
    scan_topic: "/scan"                   # 激光雷达话题
    
    # 自动初始位姿（关键配置！）
    set_initial_pose: true                # 启用自动初始位姿
    initial_pose:                         # 初始位姿（必须与Gazebo spawn位置一致）
      x: 0.0                              # X坐标（米）
      y: 0.0                              # Y坐标（米）
      z: 0.0                              # Z坐标（米）
      yaw: 0.0                            # 朝向角度（弧度，0=朝东）

```

**如何修改初始位置：**

1.  如果修改了Gazebo的spawn坐标（`gazebo_sim.launch.py`中的 `-x`, `-y` 参数）
    
2.  必须同步修改此处的 `initial_pose.x/y` 值
    
3.  否则AMCL会在错误的位置初始化，导致定位偏差
    

---

### 9.2 Nav2参数 (`user_space/nav/robot-nav/robot_config/robot_1/gac_nav2_params.yaml`)

#### 9.2.1 全局规划器配置

```yaml
planner_server:
  ros__parameters:
    expected_planner_frequency: 1.0        # 规划频率(Hz)
    
    # 注册两个规划器插件
    planner_plugins: ["GridBased", "FixedGridBased"]
    
    # GridBased: 路网导航（优先使用）
    GridBased:
      plugin: "nav2_fixed_path_route/FixedPathRoute"
      json_path: "/user_space/nav/robot-nav/robot_config/robot_1/path_default.json"
      # 路网文件路径（45个点，15.53米）
    
    # FixedGridBased: A*全局规划（备用）
    FixedGridBased:
      plugin: "nav2_navfn_planner/NavfnPlanner"
      use_astar: true                      # 使用A*算法（比Dijkstra快）
      tolerance: 0.5                       # 目标容差（米）

```

**规划器选择逻辑**（在FixedPathRoute代码中）：

```plaintext
计算起点到目标的直线距离 d_start_goal
计算起点到最近路网点的距离 d_start_road

if d_start_goal < d_start_road:
    使用 FixedGridBased (A*) 直接规划
else:
    使用 GridBased (路网) 规划

```
---

#### 9.2.2 局部代价地图配置

```yaml
local_costmap:
  local_costmap:
    ros__parameters:
      update_frequency: 5.0                # 更新频率(Hz)
      publish_frequency: 2.0              # 发布频率(Hz)
      global_frame: odom                  # 参考坐标系
      robot_base_frame: base_link         # 机器人坐标系
      rolling_window: true                # 滚动窗口（跟随机器人）
      width: 3                            # 地图宽度（米）
      height: 3                           # 地图高度（米）
      resolution: 0.05                    # 分辨率（米/像素）
      
      obstacle_layer:                     # 障碍物层
        observation_sources: scan
        scan:
          topic: /scan
          data_type: LaserScan
          clearing: True                  # 清除旧障碍物
          marking: True                   # 标记新障碍物
          max_obstacle_height: 2.0        # 最大障碍物高度
          min_obstacle_height: 0.0        # 最小障碍物高度
          obstacle_max_range: 2.5         # 最大检测距离
          obstacle_min_range: 0.0         # 最小检测距离
          raytrace_max_range: 3.0         # 光线追踪最大距离
          raytrace_min_range: 0.0         # 光线追踪最小距离
      
      inflation_layer:                    # 膨胀层（安全边距）
        inflation_radius: 0.35            # 膨胀半径（米）
        cost_scaling_factor: 5.0          # 代价衰减因子

```

**膨胀半径说明：**

*   `inflation_radius: 0.35` 表示机器人在距离墙壁35cm处就开始减速避让
    
*   如果值太大（如0.8），机器人可能在窄通道中无法通过
    
*   如果值太小（如0.1），机器人可能贴墙太近有碰撞风险
    
*   当前值0.35适合室内环境（门宽通常>80cm）
    

---

#### 9.2.3 全局代价地图配置

```yaml
global_costmap:
  global_costmap:
    ros__parameters:
      update_frequency: 1.0               # 更新频率较低（全局地图变化慢）
      publish_frequency: 1.0
      global_frame: map
      robot_base_frame: base_link
      robot_radius: 0.22                  # 机器人半径（米）
      resolution: 0.05
      track_unknown_space: true           # 跟踪未知区域
      
      obstacle_layer:
        observation_sources: scan
        scan:
          topic: /scan
          data_type: LaserScan
          clearing: True
          marking: True
          max_obstacle_height: 2.0
          obstacle_max_range: 2.5
      
      inflation_layer:
        inflation_radius: 0.50            # 全局膨胀半径略大（更保守）
        cost_scaling_factor: 5.0
      always_send_full_costmap: True       # 始终发送完整地图

```
---

#### 9.2.4 行为树配置

```yaml
bt_navigator:
  ros__parameters:
    use_sim_time: False                   # 注意：这里用False！
    global_frame: map
    robot_base_frame: base_link
    
    # 行为树XML文件路径
    default_nav_to_pose_bt_xml: /home/zr/code/src/install/gac_nav2_bt_navigator/share/gac_nav2_bt_navigator/behavior_trees/13_test.xml
    
    # 行为树插件库
    plugin_lib_names:
    - nav2_compute_path_to_pose_action_bt_node
    - nav2_smooth_path_action_btnode
    - nav2_follow_path_action_bt_node
    - nav2_spin_action_bt_node
    - nav2_wait_action_bt_node
    - nav2_back_up_action_bt_node
    - nav2_clear_costmap_service_bt_node
    - nav2_is_stuck_condition_bt_node
    - nav2_goal_reached_condition_bt_node

```

**行为树文件 (**`**13_test.xml**`**) 关键内容：**

```xml
<!-- 计算路径动作 -->
<Action ID="ComputePathToPose" goal="{goal}" path="{path}" planner_id="GridBased"/>
<!-- 注意：planner_id必须是"GridBased"，对应gac_nav2_params.yaml中的plugin名称 -->

<!-- 执行路径跟随 -->
<Action ID="FollowPath" path="{path}" controller_id="FollowPath"/>

```
---

### 9.3 路网数据 (`path_default.json`)

**文件格式：**

```json
[
  {
    "name": "path_default_0",
    "x": -9.59,
    "y": -1.42,
    "z": 0.001,
    "qx": 0.0, "qy": 0.0, "qz": 0.0, "qw": 1.0,
    "attribute": "Auto Generated",
    "map_name": "default",
    "direction": "bidirectional",

    "predecessors": [],

    "successors": ["path_default_1"],
    "edge_weights": {"path_default_1": 0.3502}
  },
  // ... 共45个点
]

```

**字段说明：**

*   `name`: 路网点唯一标识符
    
*   `x, y, z`: 世界坐标系下的位置（单位：米）
    
*   `qx, qy, qz, qw`: 四元数方向（通常朝上）
    
*   `predecessors`: 前驱节点列表（邻接关系）
    
*   `successors`: 后继节点列表（邻接关系）
    
*   `edge_weights`: 到相邻节点的边权重（欧氏距离）
    

**如何重新生成路网：** 参见第10章"高级功能"中的"路网采集工具"。

---

## 10. 高级功能

### 10.1 路网采集工具

当需要为新地图生成路网时，可以使用内置的工具。

#### 方法一：手动录制轨迹（推荐）

**步骤：**

```bash
# 1. 启动仿真环境（终端1-4全部启动）

# 2. 新开终端，开始录制
cd ~/code/src
source /opt/ros/humble/setup.bash
source ./install/setup.bash

ros2 topic echo /odom --field pose.pose.position > /tmp/trajectory_raw.txt

# 3. 在Vizanti中手动驾驶机器人，沿期望路线走一圈
#    建议：走廊中心线、主要通道、关键路口都走到
#    每个拐角处停留1-2秒

# 4. 录制完成后 Ctrl+C 停止

# 5. 后处理生成路网文件
cat > /tmp/convert_odom_to_road_network.py << 'EOF'
#!/usr/bin/env python3
import json, sys, math
from datetime import datetime

def parse_odom_log(filepath):

    poses = [ ]

    with open(filepath, 'r') as f:
        lines = f.readlines()
        i = 0
        while i < len(lines):
            line = lines[i].strip()
            if line.startswith('---') or not line:
                i += 1
                continue
            if 'position:' in line:
                try:
                    next_line = lines[i+1].strip() if i+1 < len(lines) else ''
                    if 'x:' in next_line:
                        parts = next_line.split()
                        x = float(parts[1])
                        y = float(parts[3]) if len(parts) > 3 else 0.0
                        z = float(parts[5]) if len(parts) > 5 else 0.0
                        poses.append({'x': x, 'y': y, 'z': z})
                except (IndexError, ValueError):
                    pass
            i += 1
    return poses

def generate_road_network(poses, min_distance=0.35):
    if not poses:

        return [ ]

    
    filtered = [poses[0]]
    for pose in poses[1:]:
        last = filtered[-1]
        dist = math.sqrt((pose['x']-last['x'])**2 + (pose['y']-last['y'])**2)
        if dist >= min_distance:
            filtered.append(pose)
    

    network = [ ]

    for i, pose in enumerate(filtered):
        node = {
            "name": f"path_default_{i}",
            "x": round(pose['x'], 4),
            "y": round(pose['y'], 4),
            "z": round(pose.get('z', 0.0), 4),
            "qx": 0.0, "qy": 0.0, "qz": 0.0, "qw": 1.0,
            "attribute": "Recorded",
            "map_name": "default",
            "direction": "bidirectional",

            "predecessors": [], "successors": [], "edge_weights": {}

        }
        
        if i > 0:
            node["predecessors"].append(f"path_default_{i-1}")
            node["successors"].append(f"path_default_{i-1}")
            prev = filtered[i-1]
            weight = math.sqrt((pose['x']-prev['x'])**2 + (pose['y']-prev['y'])**2)
            node["edge_weights"][f"path_default_{i-1}"] = round(weight, 6)
        
        if i < len(filtered)-1:
            node["predecessors"].append(f"path_default_{i+1}")
            node["successors"].append(f"path_default_{i+1}")
        
        network.append(node)
    
    return network

if __name__ == "__main__":
    input_file = sys.argv[1] if len(sys.argv) > 1 else "/tmp/trajectory_raw.txt"
    output_file = sys.argv[2] if len(sys.argv) > 2 else "/user_space/nav/robot-nav/robot_config/robot_1/path_default.json"
    
    print(f"Parsing {input_file}...")
    poses = parse_odom_log(input_file)
    print(f"Found {len(poses)} raw samples")
    
    print("Generating road network...")
    network = generate_road_network(poses)
    print(f"Generated {len(network)} waypoints")
    
    with open(output_file, 'w') as f:
        json.dump(network, f, indent=4)
    
    print(f"Saved to {output_file}")
    total_length = sum(list(n["edge_weights"].values())[0] for n in network if n["edge_weights"])
    print(f"Total path length: {total_length:.2f}m")
EOF

python3 /tmp/convert_odom_to_road_network.py /tmp/trajectory_raw.txt /user_space/nav/robot-nav/robot_config/robot_1/path_default.json

# 6. 重启Nav2使新路网生效（终端4 Ctrl+C然后重启）

```
---

#### 方法二：从地图自动生成骨架线（实验性）

适用于简单地图，自动提取自由空间的中心线作为路网。

```bash
# 需要额外安装scikit-image
pip3 install scikit-image

# 运行骨架提取脚本
python3 ~/code/src/nav_ws_gazebo/src/road_network_collection_py/road_network_collection_py/auto_generate_road_network.py \
    --map_yaml /user_space/nav/robot-nav/nav_data/loc_map/grid_map/default.yaml \
    --output_json /user_space/nav/robot-nav/robot_config/robot_1/path_default.json \
    --min_gap_meters 0.5

```

**注意**：自动生成的路网质量取决于地图复杂度，建议人工检查后使用。

---

### 10.2 自定义机器人模型

如果要替换机器人模型（例如换成自己的机器人）：

**步骤：**

1.  准备URDF/Xacro文件（放在 `sim/robot_relate/urdf/my_robot/`）
    
2.  修改 `sim/robot_relate/launch/gazebo_sim.launch.py` 中的robot\_description
    
3.  更新 `amcl_params.yaml` 中的base\_frame\_id
    
4.  重新编译 `robot_relate` 包
    

**示例：**

```python
# gazebo_sim.launch.py
spawn_entity_node = launch_ros.actions.Node(
    package='gazebo_ros',
    executable='spawn_entity.py',
    arguments=['-topic', 'robot_description',
               '-entity', 'my_custom_robot',
               '-x', '0.0', '-y', '0.0', '-z', '0.02'])

```
---

### 10.3 多机器人仿真（高级）

本系统支持扩展到多机器人场景：

**需要的修改：**

1.  为每个机器人分配独立的命名空间（namespace）
    
2.  修改所有话题和服务名前缀（如 `/robot1/cmd_vel`, `/robot2/cmd_vel`）
    
3.  为每个机器人配置不同的初始位姿
    
4.  修改Vizanti前端以支持多机器人显示
    

**示例启动命令：**

```bash
# 机器人1
ros2 launch robot_relate gazebo_sim.launch.py namespace:=robot1 initial_x:=0.0 initial_y:=0.0

# 机器人2
ros2 launch robot_relate gazebo_sim.launch.py namespace:=robot2 initial_x:=2.0 initial_y:=2.0

```

**注意**：多机器人功能需要较多代码改动，建议熟悉ROS2后再尝试。

---

### 10.4 录制与回放仿真数据

#### 录制所有话题（用于调试）

```bash
# 新开终端
ros2 bag record -a -o simulation_debug
# 运行一段时间后 Ctrl+C 停止

# 回放
ros2 bag play simulation_debug.db3

```

#### 仅录制关键话题（节省磁盘空间）

```bash
ros2 bag record -o essential_topics \
    /scan /odom /cmd_vel /map \
    /particle_cloud /goal_pose \
    /plan /local_plan /global_costmap/costmap \
    /local_costmap/costmap /tf /tf_static

```
---

## 附录A：快速参考卡片

### A.1 常用命令速查

```bash
# 环境配置
source /opt/ros/humble/setup.bash
source ~/code/src/install/setup.bash

# 查看话题列表
ros2 topic list

# 查看话题数据
ros2 topic echo /scan --once
ros2 topic echo /cmd_vel --once

# 查看节点列表
ros2 node list

# 查看节点信息
ros2 node info /amcl

# 查看TF树
ros2 run tf2_tools view_frames
# 生成的frames.pdf在当前目录

# 手动发布初始位姿（如果不使用自动初始位姿）
ros2 topic pub /initialpose geometry_msgs/msg/PoseWithCovarianceStamped "{header: {frame_id: 'map'}, pose: {pose: {position: {x: 0.0, y: 0.0, z: 0.0}, orientation: {x: 0.0, y: 0.0, z: 0.0, w: 1.0}}, covariance: [0.0]*36}}" --once

# 单点导航（命令行方式）
ros2 action send_goal /navigate_to_pose nav2_msgs/action/NavigateToPose "{pose: {header: {frame_id: 'map'}, pose: {position: {x: 2.0, y: 1.0, z: 0.0}}}}"

# 取消导航
ros2 action send_goal /navigate_to_pose nav2_msgs/action/NavigateToPose "{}" --feedback

# 查看参数
ros2 param get /amcl set_initial_pose
ros2 param get /planner_server.planner_plugins

# 动态修改参数（无需重启）
ros2 param set /local_costmap inflation_layer inflation_radius 0.4

```

### A.2 关键话题列表

| 话题名 | 类型 | 方向 | 说明 |
| --- | --- | --- | --- |
| `/scan` | sensor\_msgs/LaserScan | 传感器→ROS | 激光雷达数据 |
| `/odom` | nav\_msgs/Odometry | Gazebo→ROS | 里程计 |
| `/map` | nav\_msgs/OccupancyGrid | MapServer→全局 | 占据栅格地图 |
| `/particle_cloud` | geometry\_msgs/PoseArray | AMCL→RViz | 粒子云可视化 |
| `/cmd_vel` | geometry\_msgs/Twist | 控制器→Gazebo | 速度命令 |
| `/goal_pose` | geometry\_msgs/PoseStamped | 用户→Planner | 导航目标 |
| `/plan` | nav\_msgs/Path | Planner→Controller | 全局路径 |
| `/local_plan` | nav\_msgs/Path | Controller→Robot | 局部路径 |
| `/initialpose` | geometry\_msgs/PoseWithCovarianceStamped | 用户→AMCL | 初始位姿 |
| `/robot/task` | std\_msgs/String | Vizanti→TaskManager | MQTT任务消息 |
| `/tour_task_status` | std\_msgs/String | StatusBridge→外部 | 任务状态反馈 |

### A.3 服务列表

| 服务名 | 类型 | 说明 |
| --- | --- | --- |
| `/reset_pose` | std\_srvsrv/Empty | 重置AMCL粒子分布 |
| `/clear_entirely_global_costmap` | std\_srvsrv/Empty | 清除全局代价地图 |
| `/clear_entirely_local_costmap` | std\_srvsrv/Empty | 清除局部代价地图 |

---

## 附录B：故障排除决策树

```plaintext
系统无法启动？
├─ Gazebo窗口没打开？
│  ├─ 检查显卡驱动 → sudo ubuntu-drivers autoinstall
│  ├─ 检查URDF文件 → ls ~/code/src/sim/robot_relate/urdf/
│  └─ 软件渲染 → export LIBGL_ALWAYS_SOFTWARE=1
│
├─ AMCL报错？
│  ├─ "Please set initial pose" → 添加set_initial_pose参数
│  ├─ UTF-8编码错误 → 删除amcl_params.yaml中的中文注释
│  └─ 地图文件缺失 → 检查default.pgm路径
│
├─ Vizanti地图不显示？
│  ├─ 刷新浏览器 → Ctrl+F5
│  ├─ 检查TF树 → ros2 run tf2_tools view_frames
│  └─ 检查AMCL状态 → ros2 topic echo /particle_cloud --once
│
├─ Nav2启动超时？
│  ├─ 杀掉残留进程 → pkill -9 -f "nav2"
│  ├─ 检查配置文件语法 → yaml lint gac_nav2_params.yaml
│  └─ 检查行为树路径 → ls 13_test.xml
│
└─ 导航异常？
   ├─ 穿墙 → 重新录制路网或禁用GridBased
   ├─ 不移动 → 检查cmd_vel话题、膨胀半径
   ├─ TaskManager报错 → 在Vizanti重建巡逻路线
   └─ 性能差 → 减少粒子数、降低更新频率

```
---

## 附录C：联系方式与技术支持

### C.1 相关文档

*   **ROS2官方文档**: https://docs.ros.org/en/humble/
    
*   **Nav2官方教程**: https://navigation.ros.org/
    
*   **Gazebo教程**: https://gazebosim.org/docs
    
*   **Vizanti GitHub**: https://github.com/MoffKalast/vizanti
    

### C.2 社区支持

*   **ROS Discourse**: https://discourse.ros.org/
    
*   **Nav2 Issues**: https://github.com/ros-planning/navigation2/issues
    
*   **本项目Issues**: （填写你的GitHub仓库地址）
    

---

## 版本历史

| 版本 | 日期 | 作者 | 修改内容 |
| --- | --- | --- | --- |
| v1.0 | 2026-07-09 | Robot Navigation Team | 初始版本，整合仿真环境、自动初始位姿、路网导航 |

---

**📝 最后更新时间**: 2026年07月09日   **👥 维护团队**: 机器人导航开发组   **📧 联系邮箱**: （填写你的联系邮箱）

---
> **提示**: 如果在使用过程中遇到本文档未覆盖的问题，请查阅附录B的故障排除决策树，或参考官方文档。祝你使用愉快！🎉