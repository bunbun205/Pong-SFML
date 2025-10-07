cmake_minimum_required(VERSION 3.16)
project(Pong_SFML LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT CMAKE_BUILD_TYPE)
set(CMAKE_BUILD_TYPE Debug)
endif()

file(GLOB_RECURSE SOURCES
    "Main.cpp"
    "Source/*.cpp"
)
file(GLOB_RECURSE HEADERS
    "Header/**/*.h"
)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

# Path to your local SFML folders
set(SFML_ROOT "${CMAKE_SOURCE_DIR}/SFML")
set(SFML_INCLUDE_DIR "${SFML_ROOT}/include")
set(SFML_LIBRARY_DIR "${SFML_ROOT}/lib")

# Include and link manually
target_include_directories(${PROJECT_NAME} PRIVATE ${SFML_INCLUDE_DIR} ${CMAKE_SOURCE_DIR}/Header)
target_link_directories(${PROJECT_NAME} PRIVATE ${SFML_LIBRARY_DIR})
target_link_libraries(${PROJECT_NAME}
    PRIVATE
    sfml-graphics
    sfml-window
    sfml-system
    sfml-audio
    sfml-network
)

if(UNIX)
    target_compile_definitions(${PROJECT_NAME} PRIVATE SFML_STATIC=0)
endif()

set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

message(STATUS "Pong-SFML configured using local SFML folder in project root.")
