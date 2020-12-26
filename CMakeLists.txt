# GD32VStdPeriph CMakeLists.txt
# Author: fAiLix

cmake_minimum_required(VERSION 3.19)

add_library(
    n200-driver
    OBJECT
        "${CMAKE_CURRENT_SOURCE_DIR}/src/n200-driver/n200_func.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/startup/start.S"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/startup/entry.S"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/startup/handlers.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/startup/init.c"
    )

target_include_directories(
    n200-driver
    PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/include/n200-driver"
)