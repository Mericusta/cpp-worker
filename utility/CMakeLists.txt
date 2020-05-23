add_library(utility utility.cpp)

target_include_directories(
    utility INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
    utility PUBLIC "${PROJECT_SOURCE_DIR}/global"
    utility PUBLIC "${PROJECT_SOURCE_DIR}/error"
)