cmake_minimum_required(VERSION 3.14)
project(chap2)

set(CMAKE_CXX_STANDARD 11)

FIND_PACKAGE(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS} ${CMAKE_INCLUDE_CURRENT_DIR})

SET(SRC main.cpp
        Example2_1.cpp
        Example2_3.cpp
        PyrDown.cpp
        CannyEdge.cpp)

add_executable(chap2 ${SRC})

target_link_libraries(chap2 ${OpenCV_LIBS})