# GD32VF103 Firmware Lib

This is a standalone CMake library version of the [RISCV firmware](http://www.gd32mcu.com/en/download/7?kw=GD32VF1) provided by Gigadevice.

This is a kind of minimal version to get the gd32v up and running without using the complete standard peripheral library.

## Dependencies

For this library to work you need to provide some code in your project.

You need to:
- Set the `SystemCoreClock` to the used system clock
- Provide a `SystemInit()` function
    - This function should at least set the `SystemCoreClock`

## Using this Library

To use this library in your project, clone this repository somewhere into your project. Then add the library as a subdirectory and link target in your projects `CMakeLists.txt`.

`add_subdirectory(path/to/this/lib)` [CMake Doc](https://cmake.org/cmake/help/latest/command/add_subdirectory.html)

`target_link_libraries(<your target> gd32vf103)` [CMake Doc](https://cmake.org/cmake/help/latest/command/target_link_libraries.html)

You also have to define your target board type which is done by defining one of those variables:
- `GD32VF103C_START`
- `GD32VF103R_START`
- `GD32VF103T_START`
- `GD32VF103V_EVAL`

To define it you can add `target_compile_definitions` to your project.

`target_compile_definitions(gd32vf103 PUBLIC GD32VF103V_EVAL)` [CMake Doc](https://cmake.org/cmake/help/latest/command/target_compile_definitions.html)