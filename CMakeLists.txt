cmake_minimum_required(VERSION 3.21.0)
project(rusty-tank-game VERSION 0.1.0)

add_executable(${PROJECT_NAME} main.cpp)

find_package(raylib CONFIG REQUIRED)
target_include_directories(${PROJECT_NAME} PRIVATE ${RAYLIB_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} PRIVATE ${RAYLIB_LIBRARIES})
