cmake_minimum_required(VERSION 3.11)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PROJECT_NAME MCXRD)

project(${PROJECT_NAME})

file(GLOB_RECURSE MCXRD_SOURCES src/*.cpp)
file(GLOB_RECURSE MCXRD_HEADERS inc/*.h)

add_executable(${PROJECT_NAME} ${MCXRD_SOURCES} ${MCXRD_HEADERS})
target_compile_options(${PROJECT_NAME} PUBLIC -Wall -Wextra -g)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)
