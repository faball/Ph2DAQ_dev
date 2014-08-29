#-------------------------------------------------
#
# Project created by QtCreator 2014-08-27T16:30:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TestStand
TEMPLATE = app

QMAKE_CXXFLAGS += -g -O1 -w -pedantic -fPIC -std=c++11 `root-config --cflags --evelibs` -Wcpp

LIBS += -L/usr/include/boost -lboost_system -lboost_thread -lpthread -lboost_regex
LIBS += -L../lib -lPh2_Interface -lPh2_Description -lPh2_System -lPh2_Tools
LIBS += -L/opt/cactus/lib -lcactus_extern_pugixml -lcactus_uhal_log -lcactus_uhal_grammars -lcactus_uhal_uhal
LibraryDirs = /opt/cactus/lib /opt/xdaq/lib ../
LibraryPaths = $(LibraryDirs:%=-L%)
LIBS += $(LibraryPaths:%=-L%) -uhal `root-config --glibs`

INCLUDEPATH += /opt/cactus/include /home/xtaldaq/Ph2DAQ_dev/

SOURCES += main.cpp\
        mainview.cpp

HEADERS  += mainview.h

FORMS    += mainview.ui


