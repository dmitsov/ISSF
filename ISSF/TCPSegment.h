#ifndef TCP_SEGMENT_H_
#define TCP_SEGMENT_H_

#include "HeaderTypes.h"


class TCPSegment{
private:
    tcp_info m_tcpHeader;
    const u_char* m_packet;

public:
    TCPSegment(const u_char* packet);
    ~TCPSegment();

    u_int16_t getSourcePort();
    u_int16_t getDestPort();

    /*
    *   TODO:
    *   -implement flag checking methods
    *   -implement seq number getter
    *   -implement
    *   -implement ack number getter
    */

    //flags checks
    bool ackFlag();
    bool offFlag();
    /*TODO:
    * -implement all of the flags
    *
    *
    *
    */

    //getters for window size, ack number, seq number and so on
    u_int16_t getChecksum();
    u_int16_t getWindowSize();
    u_int16_t getUrgentPointer();
    u_int8_t getOffset();
    u_int8_t getRes();
    u_int32_t getSeqNum();
    u_int32_t getAckNum();



};


#endif
