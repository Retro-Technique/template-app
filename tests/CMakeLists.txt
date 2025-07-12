find_package(boost_unit_test_framework CONFIG REQUIRED)

add_executable(${PROJECT_NAME}-tests
    "src/pch.cpp"
)

target_link_libraries(${PROJECT_NAME}-tests
    PRIVATE 
        # libraries to test
        Boost::unit_test_framework
)

target_precompile_headers(${PROJECT_NAME}-tests
	PRIVATE 
		"src/pch.h"
)

add_test(NAME ${PROJECT_NAME}Tests COMMAND ${PROJECT_NAME}-tests)