#-------------------------------------------------
#
# Project created by QtCreator 2012-09-19T09:03:58
#
#-------------------------------------------------

QT += network gui

CONFIG(debug, debug|release){
    TARGET = CButtond
    LIBS += -L../ctcpclient/debug -lctcpclientd \
                      -L../configparser/debug -lconfigparserd \
                      -L../Fenetres/debug -lFenetresd
}
CONFIG(release, debug|release){
    TARGET = CButton
    LIBS += -L../ctcpclient/release -lctcpclient \
                        -L../configparser/release -lconfigparser \
                        -L../Fenetres/release -lFenetres
}
TEMPLATE = lib


DEFINES += CBUTTON_LIBRARY

SOURCES += cbutton.cpp

HEADERS += cbutton.h\
        CButton_global.h


DEPENDPATH += ../ctcpclient \
            ../configparser \
            ../fenetres

INCLUDEPATH += ../ctcpclient \
            ../configparser \
            ../fenetres

#debug:

#release:

#LIBS    += -lctcpclient \
#           -lconfigparser \
#           -lFenetres

