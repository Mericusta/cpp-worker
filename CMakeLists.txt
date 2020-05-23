cmake_minimum_required(VERSION 3.10)

# 设置版本
project(cpp-worker VERSION 0.1)

# 设置配置文件
configure_file(WorkerConfig.h.in WorkerConfig.h)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加子文件夹
add_subdirectory(global)
add_subdirectory(utility)
# 库
list(APPEND EXTRA_LIBS global)
list(APPEND EXTRA_LIBS utility)

# 指定程序入口
add_executable(cpp-worker main.cpp)

# 链接至库
target_link_libraries(cpp-worker PUBLIC ${EXTRA_LIBS})

# 添加待引入的文件夹
target_include_directories(cpp-worker
    PUBLIC "${PROJECT_BINARY_DIR}"
    PUBLIC "${PROJECT_SOURCE_DIR}/utility"
    PUBLIC "${PROJECT_SOURCE_DIR}/global"
)

