project( test_std_pow_performance )

find_package(ITK REQUIRED)
include( ${ITK_USE_FILE} )

ADD_EXECUTABLE(test_std_pow_performance main.cpp)
TARGET_LINK_LIBRARIES(test_std_pow_performance ${ITK_LIBRARIES})