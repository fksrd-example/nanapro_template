cmake_minimum_required(VERSION 3.0.0)
project(gtkmmexample VERSION 0.1.0)

include(CTest)
include(/home/fksrd/.local/share/vcpkg/scripts/buildsystems/vcpkg.cmake)
enable_testing()

find_package(unofficial-nana CONFIG REQUIRED)
find_package(argparse CONFIG REQUIRED)

add_executable(
    gtkmmexample 

    main.hpp
    main.cpp

    mainwindow.hpp
    mainwindow.cpp
)

target_link_libraries(gtkmmexample PRIVATE unofficial::nana::nana)
target_link_libraries(gtkmmexample PRIVATE argparse::argparse)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
