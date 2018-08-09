include(${CMAKE_HOME_DIRECTORY}/CMake/LAJEEngine.cmake)
set(COMMON_GENERAL Include/CommonTypes.h
        Include/List.h
        )
set(COMMON_ALL ${COMMON_GENERAL})
find_package(GLOG REQUIRED)
CreateModule(Common "${COMMON_ALL}")
#target_link_libraries(Common glog)