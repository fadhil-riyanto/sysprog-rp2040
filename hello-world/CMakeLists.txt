cmake_minimum_required(VERSION 3.13)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(/home/fadhil_riyanto/git_clone/pico-sdk/pico_sdk_init.cmake)

pico_sdk_init()

project(hello_usb C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)


add_executable(hello_usb hello_usb.c)
target_link_libraries(hello_usb pico_stdlib)

# # enable usb output, disable uart output
# pico_enable_stdio_usb(hello_usb 1)
# pico_enable_stdio_uart(hello_usb 0)

pico_add_extra_outputs(hello_usb)