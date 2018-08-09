include(${CMAKE_HOME_DIRECTORY}/CMake/LAJEEngine.cmake)
set(
        CORE_SCENES
        Include/Scenes/Scene.h
        Include/Scenes/SceneObject.h
        Source/Scenes/SceneObject.cpp
)
set(
        CORE_GAME
        Include/Game/Game.h
        Include/Game/GameMode.h
        Include/Game/GameObject.h
        Source/Game/GameMode.cpp
        Source/Game/Game.cpp
)
set(CORE_GENERAL Include/ITickable.h)
set(CORE_ALL ${CORE_SCENES} ${CORE_GAME} ${CORE_GENERAL})
CreateModule(Core "${CORE_ALL}")
target_link_libraries(Core Common)