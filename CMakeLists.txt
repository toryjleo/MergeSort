cmake_minimum_required(VERSION 2.8.9)
set(PROJECT_NAME MergeSort)
project(MergeSort)
find_package(Threads REQUIRED)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${PROJECT_SOURCE_DIR}/cmake)
#actually find the files you need to use
file(GLOB SOURCES "src/*.cc")
if(CMAKE_COMPILER_IS_GNUCXX)
	add_definitions(-Wall -ansi -Wno-deprecated -pthread -std=c++11)
endif()
#uses sources variable to build the executable

add_library(${PROJECT_NAME} SHARED ${SOURCES})


#TEST
option (enable-test "Compile all MergeSort unit tests" ON)

if (enable-test)
  include(gtest)
  enable_testing()
  set(PROJECT_TEST_NAME ${PROJECT_NAME}_test)
  include_directories(${GTEST_INCLUDE_DIRS})
  file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/test/*.cc)
  add_executable(${PROJECT_TEST_NAME} ${TEST_SRC_FILES})
  add_dependencies(${PROJECT_TEST_NAME} googletest)
  add_dependencies(${PROJECT_TEST_NAME} ${PROJECT_NAME})
  target_link_libraries(${PROJECT_TEST_NAME}
      ${GTEST_LIBS_DIR}/libgtest.a
      ${GTEST_LIBS_DIR}/libgtest_main.a
      ${PROJECT_NAME}
      )
  target_link_libraries(${PROJECT_TEST_NAME} ${CMAKE_THREAD_LIBS_INIT})
  add_test(test1 ${PROJECT_TEST_NAME} "--gtest_color=yes")
endif()

