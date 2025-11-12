cmake_minimum_required(VERSION 3.15)
project(WLib C)

set(CMAKE_C_STANDARD 11)

# Collect all .c files recursively in wlib/
file(GLOB_RECURSE WLIB_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/wlib/*.c"
)

# Create the library target
add_library(WLib ${WLIB_SOURCES})

# Expose the parent folder so users include as <wlib/header.h>
target_include_directories(WLib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
