cmake_minimum_required(VERSION 3.18 FATAL_ERROR)

project(rancac)

find_package(Eigen3 3.3 REQUIRED NO_MODULE)

add_library(${PROJECT_NAME} INTERFACE)
target_include_directories(${PROJECT_NAME} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(${PROJECT_NAME} INTERFACE Eigen3::Eigen)

add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/examples/main.cpp)
target_link_libraries(main PRIVATE ${PROJECT_NAME})