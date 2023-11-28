cmake_minimum_required(VERSION 3.25)

project(
    CGPlayground
    VERSION 0.0.1
    LANGUAGES CXX
)
set(CMAKE_CXX_STANDARD 20)

add_subdirectory(external/VulkanMadeEasy)
add_executable(CGPlayground)
target_sources(CGPlayground PRIVATE
    include/Application.h
    src/Application.cpp
    src/main.cpp
)
target_link_libraries(CGPlayground VulkanMadeEasy)
target_include_directories(CGPlayground PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)