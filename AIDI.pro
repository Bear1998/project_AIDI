#-------------------------------------------------
#
# Project created by QtCreator 2019-05-09T14:39:17
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AIDI
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

RC_FILE = aidi_logo.rc
SOURCES += main.cpp\
        aidi.cpp \
    choosemode.cpp \
    op_addsourse.cpp \
    op_delsourse.cpp \
    op_cutsourse.cpp

HEADERS  += aidi.h \
    choosemode.h \
    op_addsourse.h \
    op_delsourse.h \
    op_cutsourse.h

FORMS    += aidi.ui \
    choosemode.ui \
    op_addsourse.ui \
    op_delsourse.ui \
    op_cutsourse.ui

RESOURCES += \
    op_imgresourse.qrc

TRANSLATIONS+=cn.ts \
              en.ts
