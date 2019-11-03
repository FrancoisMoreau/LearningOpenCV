cmake_minimum_required(VERSION 3.14)
project(chap9)

set(CMAKE_CXX_STANDARD 14)


FIND_PACKAGE(OpenCV REQUIRED)

include_directories(
        ${CMAKE_INCLUDE_CURRENT_DIR}
        ${OpenCV_INCLUDE_DIRS}
        ${PROJECT_SOURCE_DIR})

add_executable(chap9 main.cpp)

target_link_libraries(chap9 ${OpenCV_LIBS})

