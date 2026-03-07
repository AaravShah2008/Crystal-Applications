cmake_minimum_required(VERSION 3.20)

project(CalculatorEngine)

set(CMAKE_CXX_STANDARD 17)

# GLFW
add_subdirectory(third_party/glfw)

# GLAD
add_library(glad third_party/glad/src/glad.c)
target_include_directories(glad PUBLIC third_party/glad/include)

# Executable
add_executable(calculator
    src/main.cpp
)

# Link libraries
target_link_libraries(calculator glfw glad)