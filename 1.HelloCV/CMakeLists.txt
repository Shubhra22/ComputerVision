cmake_minimum_required(VERSION 3.16)
project(HelloCV)

set(OpenCV_DIR "D:/opencv_build")

find_package( OpenCV REQUIRED )

message(STATUS "OpenCV library status:")
message(STATUS "    config: ${OpenCV_DIR}")
message(STATUS "    version: ${OpenCV_VERSION}")
message(STATUS "    libraries: ${OpenCV_LIBS}")
message(STATUS "    include path: ${OpenCV_INCLUDE_DIRS}")

set(CMAKE_CXX_STANDARD 14)

add_executable(HelloCV main.cpp)

target_link_libraries(HelloCV PRIVATE ${OpenCV_LIBS})