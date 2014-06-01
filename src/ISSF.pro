#-------------------------------------------------
#
# Project created by QtCreator 2013-12-22T15:07:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ISSF
TEMPLATE = app

QMAKE_CXXFLAGS += -O0\
                  -std=c++11

SOURCES +=\
        MainWindow.cpp \
    WLANFrame.cpp \
    TCPSegment.cpp \
    IPPacket.cpp \
    findname.cpp \
    EthernetFrame.cpp \
    main.cpp \
    ThreadControll/Thread.cpp \
    SharedMemoryClasses/Packet.cpp \
    SharedMemoryClasses/SharedMemoryController.cpp \
    ISSF.cpp \
    SharedMemoryClasses/PacketVector.cpp \
    Filter.cpp \
    FilterEther.cpp \
    FilterIP.cpp \
    FilterTCP.cpp \
    HelperFunctions.cpp \
    HTTPPacket.cpp \
    UDPSegment.cpp \
    FilterUDP.cpp

HEADERS  += MainWindow.h \
    WLANFrame.h \
    TCPSegment.h \
    ISSF.h \
    IPPacket.h \
    HelperFunctions.h \
    HeaderTypes.h \
    findname.h \
    EthernetFrame.h \
    include/LinkLayerData.h \
    SharedMemoryClasses/SharedMemoryController.h \
    SharedMemoryClasses/Packet.h \
    SharedMemoryClasses/PacketVector.h \
    ThreadControll/Thread.h \
    PcapLoop.h \
    include/AbstractHeader.h \
    Filter.h \
    FilterEther.h \
    FilterIP.h \
    FilterTCP.h \
    FilterMacrosHeader.h \
    HTTPPacket.h \
    FilterUDP.h \
    UDPSegment.h
FORMS    += MainWindow.ui

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

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../usr/lib/release/ -lpcap
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../usr/lib/debug/ -lpcap
else:unix: LIBS += -L$$PWD/../../../../usr/lib/ -lpcap

INCLUDEPATH += $$PWD/../../../../usr/include
DEPENDPATH += $$PWD/../../../../usr/include

win32:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../../usr/lib/release/pcap.lib
else:win32:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../../usr/lib/debug/pcap.lib
else:unix: PRE_TARGETDEPS += $$PWD/../../../../usr/lib/libpcap.a

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../usr/lib/release/ -lpcap
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../usr/lib/debug/ -lpcap
else:unix: LIBS += -L$$PWD/../../../../usr/lib/ -lpcap

INCLUDEPATH += $$PWD/../../../../usr/include
DEPENDPATH += $$PWD/../../../../usr/include

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../usr/lib/release/ -lboost_thread
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../usr/lib/debug/ -lboost_thread
else:unix: LIBS += -L$$PWD/../../../../usr/lib/ -lboost_thread

INCLUDEPATH += $$PWD/../../../../usr/include
DEPENDPATH += $$PWD/../../../../usr/include

win32:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../../usr/lib/release/boost_thread.lib
else:win32:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../../usr/lib/debug/boost_thread.lib
else:unix: PRE_TARGETDEPS += $$PWD/../../../../usr/lib/libboost_thread.a

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../usr/lib/release/ -lboost_thread
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../usr/lib/debug/ -lboost_thread
else:unix: LIBS += -L$$PWD/../../../../usr/lib/ -lboost_thread

INCLUDEPATH += $$PWD/../../../../usr/include
DEPENDPATH += $$PWD/../../../../usr/include

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../usr/lib/release/ -lboost_system
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../usr/lib/debug/ -lboost_system
else:unix: LIBS += -L$$PWD/../../../../usr/lib/ -lboost_system

INCLUDEPATH += $$PWD/../../../../usr/include
DEPENDPATH += $$PWD/../../../../usr/include
