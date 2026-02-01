cmake_minimum_required(VERSION 3.15)
project(RealTimeAudio VERSION 1.0.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Platform-specific settings
if(WIN32)
    add_compile_definitions(PLATFORM_WINDOWS)
    # MSVC-specific flags
    if(MSVC)
        add_compile_options(/W4 /WX)
    endif()
elseif(APPLE)
    add_compile_definitions(PLATFORM_MAC)
    # Clang-specific flags
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Source files
file(GLOB_RECURSE SOURCES "main/*.cpp")
file(GLOB_RECURSE HEADERS "include/*.h")

# Create executable
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

# Platform-specific linking
if(WIN32)
    # Windows-specific libraries
elseif(APPLE)
    # Mac-specific frameworks
    target_link_libraries(${PROJECT_NAME} "-framework CoreFoundation")
endif()
