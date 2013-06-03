project( test_debug_assertions_performance )

find_package(ITK REQUIRED)
include( ${ITK_USE_FILE} )

ADD_EXECUTABLE(test_debug_assertions_performance main.cpp)
TARGET_LINK_LIBRARIES(test_debug_assertions_performance ${ITK_LIBRARIES})