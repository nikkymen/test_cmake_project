cmake_minimum_required(VERSION 2.8)

project(test)

include_directories(.)
include_directories(third_party)

set(SOURCES
    module.h
    module.cpp
    )

add_library(${PROJECT_NAME} ${SOURCES})

set_target_properties(${PROJECT_NAME} PROPERTIES COMPILE_FLAGS -std=gnu++11)

#########

add_executable(${PROJECT_NAME}_unittest test/test_main.cpp test/test_lib.cpp)

target_link_libraries(${PROJECT_NAME}_unittest ${PROJECT_NAME})

set_target_properties(${PROJECT_NAME}_unittest PROPERTIES COMPILE_FLAGS -std=gnu++11)
