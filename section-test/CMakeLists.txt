cmake_minimum_required(VERSION 3.13)

include(/home/fadhil_riyanto/git_clone/pico-sdk/pico_sdk_init.cmake)

project(section_test C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)


pico_sdk_init()

if(TARGET _pico_sdk_inclusion_marker)
    message(STATUS "It says something else.")
endif()


add_executable(section_test
    main.c
)



target_link_libraries(section_test pico_stdlib)

pico_add_extra_outputs(section_test)