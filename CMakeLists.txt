cmake_minimum_required(VERSION 3.12)
project(raylibTemplate)

set(CMAKE_CXX_STANDARD 17)

# Get the source toegher
file(GLOB sources *.cpp)

# Get the source  of classes toegher
file(GLOB sources_clases clases/*.cpp)

set(GRAPHICS GRAPHICS_API_OPENGL_21)
include("cmake/raylib_web.cmake")
include("cmake/raylib.cmake")


add_executable(${PROJECT_NAME} ${sources} ${sources_clases} clases/Car.h clases/Map.h clases/Map.cpp clases/Game.h clases/TextureManager.h clases/Game.cpp clases/TextureManager.cpp clases/Renderer.h clases/Renderer.cpp clases/SoundManager.h clases/SoundManager.cpp clases/Entity.h clases/LoadData.h clases/LoadData.cpp clases/Enemies.h clases/Enemies.cpp clases/Jugador.h clases/Jugador.cpp clases/CarFactory.h clases/CarFactory.cpp clases/Car.cpp clases/Document.cpp clases/Document.h clases/State.h clases/menu.cpp clases/menu.h clases/Play.h clases/Play.cpp clases/Buttons.cpp clases/Buttons.h clases/Strategybutton.cpp clases/Strategybutton.h clases/Strategy.h)
add_dependencies(${PROJECT_NAME} raylib)
target_link_libraries(${PROJECT_NAME} ${raylib_LDFLAGS})
target_include_directories(${PROJECT_NAME} PRIVATE ${raylib_INCLUDE_DIRS})

file(COPY "resources/"  DESTINATION "resources/")

include("cmake/raylib_web_post.cmake")

