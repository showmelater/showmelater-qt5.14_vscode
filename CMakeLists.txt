cmake_minimum_required(VERSION 4.2.3)
project(project1 VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories("./includes/")

find_package(Qt5 5.14 REQUIRED COMPONENTS Widgets)

set(MY_EXECUTABLE_NAME "project1")

add_executable(
  ${MY_EXECUTABLE_NAME}
  "./src/main.cpp"
)

target_link_libraries(${MY_EXECUTABLE_NAME} PRIVATE Qt5::Widgets)
