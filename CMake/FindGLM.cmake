set(GLM_DIR ${CMAKE_HOME_DIRECTORY}/Libraries/glm)
add_subdirectory(${GLM_DIR} glm)
add_library(glm_static ALIAS glm)
target_include_directories(
        glm
        INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/Include>
        $<INSTALL_INTERFACE:Include>



)