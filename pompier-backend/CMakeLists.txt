cmake_minimum_required(VERSION 3.16)

project(Pompier VERSION 0.1 LANGUAGES CXX)

# Qt auto
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Qt6 Widgets
find_package(Qt6 REQUIRED COMPONENTS
    Widgets
    Sql
    Network
)

# Sources
set(PROJECT_SOURCES
    main.cpp
    superviseurope.cpp
    superviseurope.h
    superviseurope.ui
    ficheurgence.cpp
    ficheurgence.h
    geocoding.cpp
    geocoding.h
)

# Executable (Widgets only)
qt_add_executable(Pompier
    MANUAL_FINALIZATION
    ${PROJECT_SOURCES}
)

# Link libraries
target_link_libraries(Pompier
    PRIVATE
        Qt6::Widgets
        Qt6::Sql
        Qt6::Network
)

# App properties
set_target_properties(Pompier PROPERTIES
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

# Install
include(GNUInstallDirs)
install(TARGETS Pompier
    BUNDLE DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# Finalize Qt6
qt_finalize_executable(Pompier)
