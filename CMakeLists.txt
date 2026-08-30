cmake_minimum_required(VERSION 3.16)

project(CelestialBodyOOP
    VERSION 1.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(celestial-body
    src/main.cpp
    src/CelestialBody.cpp
    src/Planet.cpp
    src/GasGiant.cpp
    src/RockyPlanet.cpp
    src/GasRingPlanet.cpp
)

target_include_directories(celestial-body
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)