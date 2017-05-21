cmake_minimum_required (VERSION 2.6)
project (Kawa)
SET(CMAKE_CXX_FLAGS "-std=c++0x")
add_executable(Kawa main.cpp coffeeMachine.cpp)

enable_testing()
find_package(GTest REQUIRED)
add_executable(Kawa_test main_test.cpp coffeeMachine.cpp)
target_link_libraries(Kawa_test ${GTEST_BOTH_LIBRARIES} pthread)