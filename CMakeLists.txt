cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS_RELEASE "-02")

project(3d_engine VERSION 1.0)
add_executable(3d_engine)
target_include_directories(3d_engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
