#-------------------------------------------------
#
# Project created by QtCreator 2013-12-22T15:07:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ISSF
TEMPLATE = app


SOURCES +=\
        MainWindow.cpp \
    WLANFrame.cpp \
    Window.cpp \
    TCPSegment.cpp \
    IPPacket.cpp \
    HelperFunctions.cpp \
    findname.cpp \
    EthernetFrame.cpp \
    dialog.cpp \
    UI/SimpleButton.cpp \
    UI/ProcessButtonSegment.cpp \
    main.cpp \
    UI/FilterSegment.cpp

HEADERS  += MainWindow.h \
    WLANFrame.h \
    TCPSegment.h \
    Menu.h \
    ISSF.h \
    IPPacket.h \
    HelperFunctions.h \
    HeaderTypes.h \
    findname.h \
    EthernetFrame.h \
    dialog.h \
    UI/SimplePushButton.h \
    UI/ProcessButtonsSegment.h \
    UI/Button.h \
    include/LinkLayerData.h \
    UI/FilterSegment.h \
    SharedMemoryClasses/SharedMemoryController.h \
    SharedMemoryClasses/Packet.h \
    SharedMemoryClasses/PacketVector.h
FORMS    += MainWindow.ui \
    dialog.ui

OTHER_FILES += \
    Untitled1 \
    Makefile \
    ISSF.pro.user \
    ISSF.layout.cbTemp \
    ISSF.layout \
    ISSF.depend \
    ISSF.cbp.cbTemp \
    ISSF.cbp \
    HelperFunctions \
    gmon.out

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../usr/lib/release/ -lpcap
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../usr/lib/debug/ -lpcap
else:unix: LIBS += -L$$PWD/../../../usr/lib/ -lpcap

INCLUDEPATH += $$PWD/../../../usr/include
DEPENDPATH += $$PWD/../../../usr/include

win32:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../usr/lib/release/pcap.lib
else:win32:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../usr/lib/debug/pcap.lib
else:unix: PRE_TARGETDEPS += $$PWD/../../../usr/lib/libpcap.a
