cmake_minimum_required(VERSION 3.10)

project(opengl_project)

# Add the include directory
include_directories(include)

# Add the directory containing the binaries
link_directories(lib)

# Copy the DLL file to the build directory
# file(COPY freeglut.dll DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

# Generate a list of DLL files
file(GLOB DLL_FILES "*.dll")

# Copy the DLL files to the build directory
file(COPY ${DLL_FILES} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

# Add the executable target
add_executable(main main.cpp)

# Link against the freeglut library
target_link_libraries(main PRIVATE freeglut opengl32)