TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        capteurhumidite.cpp \
        controleurdeserre.cpp \
        ds3231.cpp \
        main.cpp \
        vanne.cpp \
        zonearrosage.cpp \
        zonearrosage2.cpp

HEADERS += \
    capteurhumidite.h \
    controleurdeserre.h \
    ds3231.h \
    vanne.h \
    zonearrosage.h \
    zonearrosage2.h
