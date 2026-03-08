cmake_minimum_required(VERSION 3.10)

# 定义这个项目的名字
project(FileManager)

# 指定用 C++17 标准编译项目
set(CMAKE_CXX_STANDARD 17)

# 包含头文件目录
include_directories(include)

# 告诉 cmake 把 src/main.cpp 
# 和 src/FileManager.cpp 
# 编译成一个名为 filemanager 的可执行文件
add_executable(filemanager src/main.cpp src/FileManager.cpp)