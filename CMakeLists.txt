cmake_minimum_required(VERSION 3.11)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PROJECT_NAME MCXRD)

project(${PROJECT_NAME})

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc)

# Sorces
set(MCXRD_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)

# Headers
set(MCXRD_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/inc/parser/IParseFile.h)

add_executable(${PROJECT_NAME} ${MCXRD_SOURCES} ${MCXRD_HEADERS})