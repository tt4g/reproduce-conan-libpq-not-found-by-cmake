cmake_minimum_required(VERSION 3.0.0)
project(reproduce_conan_libpq_not_found_by_cmake VERSION 0.1.0)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

find_package(PostgreSQL REQUIRED)

add_executable(reproduce_conan_libpq_not_found_by_cmake main.cpp)
target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS})
