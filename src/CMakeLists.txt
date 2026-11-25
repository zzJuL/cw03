cmake_minimum_required(VERSION 3.10)
project(lab)

file(GLOB SOURCE_FILES
    *.c
    src/*.c
)

# Add test executable
add_executable(mylab.out ${SOURCE_FILES})

target_compile_definitions(mylab.out PRIVATE
    FILE_1_PATH="${CMAKE_CURRENT_SOURCE_DIR}/file_1.txt"
    FILE_2_PATH="${CMAKE_CURRENT_SOURCE_DIR}/file_2.txt"
)