cmake_minimum_required(VERSION 3.15)
project(Armandus)

# C++ Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Output executable location
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/src/bin")

# Define source files
set(SOURCES
    src/core/app/application.cpp
    src/core/gui/imgui.cpp
    src/core/gui/imgui_draw.cpp
    src/core/gui/imgui_tables.cpp
    src/core/gui/imgui_widgets.cpp
    src/core/gui/imgui_impl_glfw.cpp
    src/core/gui/imgui_impl_opengl3.cpp
    C:/glad/src/glad.c
)

# Create the executable
add_executable(Armandus ${SOURCES})

# Include directories
target_include_directories(Armandus PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/core
    ${CMAKE_CURRENT_SOURCE_DIR}/core/gui
    C:/glfw-3.4.bin.WIN64/include
    C:/glm
    C:/glad/include
    C:/freetype-2.13.3/include
)

# Link directories (for static or dynamic .lib/.a/.dll.a)
link_directories(
    C:/glfw-3.4.bin.WIN64/lib-mingw-w64
    C:/freetype-2.13.3/lib
    C:/msys64/ucrt64/lib
)

# Link libraries
target_link_libraries(Armandus
    glfw3       # ⚠️ Make sure this matches the .lib/.a you have in lib-mingw-w64
    opengl32
    gdi32
)
