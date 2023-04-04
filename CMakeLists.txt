cmake_minimum_required(VERSION 3.10)

project(Observer)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/observer)

add_executable(Observer main.cpp)
target_include_directories(Observer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/observer)
target_link_libraries(Observer PUBLIC observerLib)
install(TARGETS Observer RUNTIME)


