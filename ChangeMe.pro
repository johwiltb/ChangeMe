TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    InitialConfigurator.cpp \
    MainHandler.cpp \
    Scanner.cpp \
    TokenHandler.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    InitialConfigurator.h \
    MainHandler.h \
    Scanner.h \
    TokenHandler.h

