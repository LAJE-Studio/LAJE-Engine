add_library(glfw3 STATIC IMPORTED GLOBAL)
target_include_directories(
        glfw3
        INTERFACE
        ${CMAKE_HOME_DIRECTORY}/Libraries/glfw/include
)
set_target_properties(glfw3 PROPERTIES IMPORTED_LOCATION ${CMAKE_HOME_DIRECTORY}/Libraries/glfw/lib-vc2015)
set(GLFW_FOUND True)
