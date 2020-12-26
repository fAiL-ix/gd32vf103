# GD32VF103 Firmware Lib

This is a standalone CMake library version of the [RISCV firmware](http://www.gd32mcu.com/en/download/7?kw=GD32VF1) provided by Gigadevice.

This is a kind of minimal version to get the gd32v up and running without using the complete standard peripheral library.

## Dependencies

For this library to work you need to provide some code in your project.

You need to:
- Set the `SystemCoreClock` to the used system clock
- Provide a `SystemInit()` function
    - This function should at least set the `SystemCoreClock`
