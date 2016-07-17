project( github-issue-packer )
cmake_minimum_required( VERSION 2.6 )

include_directories( ${CMAKE_SOURCE_DIR}/3rdParty )

configure_file(
    "${PROJECT_SOURCE_DIR}/Configs.h.in"
    "${PROJECT_BINARY_DIR}/Configs.h" )

add_executable( main main.cpp )
