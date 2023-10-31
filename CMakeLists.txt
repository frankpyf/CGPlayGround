cmake_minimum_required(VERSION 3.25)

project(
    CGPlayground
    VERSION 0.0.1
    LANGUAGES CXX
)
set(CMAKE_CXX_STANDARD 20)

file(GLOB SRC src/*.cpp)
add_subdirectory(external/VulkanMadeEasy)
add_executable(CGPlayground ${SRC})
target_link_libraries(CGPlayground VulkanMadeEasy)