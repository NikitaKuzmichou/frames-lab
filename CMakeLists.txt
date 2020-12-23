cmake_minimum_required (VERSION 3.17)

project ("Frames")

add_subdirectory(src)
add_executable (frames app/frames.cpp)
target_link_libraries (frames PUBLIC FramesLib)
install (TARGETS frames DESTINATION bin)