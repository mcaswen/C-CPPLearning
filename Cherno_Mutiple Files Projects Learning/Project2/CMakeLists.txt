cmake_minimum_required(VERSION 3.10.0)
project(Project2 VERSION 0.1.0 LANGUAGES C CXX)

file(GLOB_RECURSE SRC CONFIGURE_DEPENDS "src/*.cpp")
add_executable(${PROJECT_NAME} ${SRC})

