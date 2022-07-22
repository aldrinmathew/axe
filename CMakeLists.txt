cmake_minimum_required(VERSION 3.16.3)

project(axe
    VERSION "0.0.1"
    DESCRIPTION "Networking library for C++"
    HOMEPAGE_URL "https://github.com/aldrinmathew/axe")

set(CMAKE_CXX_COMPILER /usr/lib/llvm-14/bin/clang++)

if(CMAKE_BUILD_TYPE STREQUAL Release)
    set(IS_RELEASE ON)
    add_compile_definitions(IS_DEBUG_MODE=false)
else()
    set(IS_RELEASE OFF)
    add_compile_definitions(IS_DEBUG_MODE=true)
endif()

if(IS_RELEASE)
    set(CMAKE_CXX_FLAGS "-std=c++20 -fexceptions")
else()
    set(CMAKE_CXX_FLAGS "-g -std=c++20 -fexceptions -Wall")
endif()

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(${PROJECT_NAME}
    src/socket_address.cpp
    src/server.cpp
    src/listen.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE include/)

add_executable(axetest test/main.cpp)
target_include_directories(axetest PRIVATE include/)
target_link_directories(axetest PRIVATE build/)
target_link_libraries(axetest PRIVATE axe)

install(TARGETS ${PROJECT_NAME} DESTINATION lib)
install(DIRECTORY include/axe DESTINATION include)
install(DIRECTORY include/axe DESTINATION include)