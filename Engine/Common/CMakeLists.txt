include(${CMAKE_HOME_DIRECTORY}/CMake/LAJEEngine.cmake)
set(COMMON_GENERAL Include/Types.h Include/IObject.h)
set(COMMON_ALL ${COMMON_GENERAL})
CreateModule(Common "${COMMON_ALL}")
