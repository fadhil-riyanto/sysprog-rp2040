cmake_minimum_required(VERSION 3.13)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(/home/fadhil_riyanto/git_clone/pico-sdk/pico_sdk_init.cmake)

pico_sdk_init()

project(hello_usb C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)


add_executable(hello_usb
        caller.c
        volatile.S
)
target_link_libraries(hello_usb pico_stdlib)

pico_add_extra_outputs(hello_usb)