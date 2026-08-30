# Celestial-body-OOP

A C++ object-oriented programming project demonstrating **encapsulation, inheritance, abstraction, and polymorphism**, together with a practical DevOps workflow using Git, GitHub, CMake, and GitHub Actions.

## Project Overview

The project models different types of celestial bodies using a structured C++ class design. Common behavior is represented in base classes, while specialized celestial bodies extend that behavior.

The repository also serves as a practical DevOps learning project for practicing feature branches, pull requests, automated CI, Linux builds, and troubleshooting failed pipelines.

## Project Structure

Celestial-body-OOP/
├── .github/
│   └── workflows/
│       └── ci.yml
├── docs/
│   └── Project-report.pdf
├── include/
│   ├── CelestialBody.h
│   ├── Explorer.h
│   ├── GasGiant.h
│   ├── GasRingPlanet.h
│   ├── Planet.h
│   └── RockyPlanet.h
├── src/
│   ├── CelestialBody.cpp
│   ├── GasGiant.cpp
│   ├── GasRingPlanet.cpp
│   ├── Planet.cpp
│   ├── RockyPlanet.cpp
│   └── main.cpp
├── .gitignore
├── CMakeLists.txt
└── README.md