# GD32VStdPeriph CMakeLists.txt
# Author: fAiLix

cmake_minimum_required(VERSION 3.19)

add_library(
    gd32vf103
    OBJECT
        "${CMAKE_CURRENT_SOURCE_DIR}/src/n200-driver/n200_func.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/startup/start.S"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/startup/entry.S"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/startup/handlers.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/startup/init.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/stubs/_exit.c"
    )

target_include_directories(
    gd32vf103
    PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/include/n200-driver"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/gd32vf103"
)