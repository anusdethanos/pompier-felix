cmake_minimum_required(VERSION 3.16)

project(Pompier VERSION 0.1 LANGUAGES CXX)

# Qt automatiques
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Qt
find_package(Qt6 REQUIRED COMPONENTS
    Widgets
    Quick
    QuickWidgets
    Sql
    Network
)

# Sources C++
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

# Exécutable (UNIQUEMENT C++)
qt_add_executable(Pompier
    MANUAL_FINALIZATION
    ${PROJECT_SOURCES}
    ui/icons/check.svg ui/icons/clock.svg ui/icons/help.svg ui/icons/menu.svg ui/App.qml ui/Header.qml ui/InfoCard.qml ui/InterventionForm.qml ui/ressource.qrc ui/Tabs.qml
)

# 🔹 Resources QML
qt_add_resources(Pompier
    resources.qrc
)

# Link Qt
target_link_libraries(Pompier
    PRIVATE
        Qt6::Widgets
        Qt6::Quick
        Qt6::QuickWidgets
        Qt6::Sql
        Qt6::Network
)

# Propriétés plateforme
set_target_properties(Pompier PROPERTIES
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

# Installation
include(GNUInstallDirs)
install(TARGETS Pompier
    BUNDLE DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# Finalisation Qt6
qt_finalize_executable(Pompier)
