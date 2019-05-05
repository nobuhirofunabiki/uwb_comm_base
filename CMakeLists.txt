cmake_minimum_required(VERSION 2.8.3)
project(uwb_comm_base)

find_package(catkin REQUIRED COMPONENTS
    roscpp
    std_msgs
    uwb_msgs
)

catkin_package(
    LIBRARIES
        uwb_comm_base
    CATKIN_DEPENDS
        roscpp
        std_msgs
        uwb_msgs
)

include_directories(${catkin_INCLUDE_DIRS})

add_executable(uwb_virtual_publisher src/uwb_virtual_publisher.cpp)
add_dependencies(uwb_virtual_publisher
    ${${PROJECT_NAME}_EXPORTED_TARGETS}
    ${catkin_EXPORTED_TARGETS}
)
target_link_libraries(uwb_virtual_publisher ${catkin_LIBRARIES})
