cmake_minimum_required(VERSION 2.8)
project(opencv_cpp_examples)
set(CMAKE_CXX_STANDARD 14)

# Find OpenCV, you may need to set OpenCV_DIR variable
# to the absolute path to the directory containing OpenCVConfig.cmake file
# via the command line or GUI
set(CUDA_USE_STATIC_CUDA_RUNTIME OFF CACHE INTERNAL "for cuda")
find_package(OpenCV REQUIRED)
if (OpenCV_FOUND)

    message(STATUS "OpenCV version: ${OpenCV_VERSION}")
    # Add OpenCV headers location to your include paths
    message(STATUS "OpenCV include dirs: ${OpenCV_INCLUDE_DIRS}")
    include_directories(${OpenCV_INCLUDE_DIRS})
    # Link your application with OpenCV libraries
    message(STATUS "OpenCV libraries: ${OpenCV_LIBS}")

endif()

####################################################################

# Declare the executable target built from your sources
add_executable(1.1-helloworld 1.1-helloworld.cpp)
target_link_libraries(1.1-helloworld ${OpenCV_LIBS})

