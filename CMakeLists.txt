cmake_minimum_required(VERSION 3.17)
project(Poker)

set(CMAKE_CXX_STANDARD 20)


if(${CMAKE_VERSION} VERSION_GREATER_EQUAL "3.11.0")
    FILE(GLOB_RECURSE SOURCE_FILES CONFIGURE_DEPENDS *.cpp *.h *.c)
else()
    FILE(GLOB SOURCE_FILES *.cpp *.h */*.h */*.cpp *.c */*.c)
endif()

add_executable(Poker ${MainSources})