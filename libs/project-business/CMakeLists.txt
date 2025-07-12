add_library(${PROJECT_NAME}-business
	STATIC 
		"src/pch.cpp"
)

target_precompile_headers(${PROJECT_NAME}-business
	PRIVATE 
		"include/pch.h"
)