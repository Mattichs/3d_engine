cmake_minimum_required(VERSION 2.84)
project(battaglia-navale)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../bin/")
#set(CMAKE_CXX_FLAGS "-O2")

include_directories(OGL3D/include)

add_library(source OGL3D/src/OGL3D/Window/OWindow.cpp OGL3D/src/OGL3D/Game/OGame.cpp)

add_executable(main Game/main.cpp)

#target_link_libraries(ship board coordinate)
#target_link_libraries(board ship player coordinate)
#target_link_libraries(player board ship coordinate)

target_link_libraries(main source)