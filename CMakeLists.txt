cmake_minimum_required(VERSION 3.10)

# 设置版本
project(cpp-worker VERSION 0.1)

# 设置配置文件
configure_file(WorkerConfig.h.in WorkerConfig.h)

# 引入配置文件
target_include_directories(cpp-worker PUBLIC "${PROJECT_BINARY_DIR}")

