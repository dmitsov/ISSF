#include <stdio.h>
#include <cstring>
#include <features.h>
#include <netinet/in.h>

#include "HeaderTypes.h"'
#include "TCPSegment.h"


TCPSegment::TCPSegment(const u_char *packet)
:m_packet(packet)
{
    memset(&m_tcpHeader,0,TCP_HEADER_LENGTH);
    memcpy(&m_tcpHeader,packet,TCP_HEADER_LENGTH);
}

TCPSegment::~TCPSegment(){
}

u_int16_t TCPSegment::getDestPort(){
    return m_tcpHeader.dest_port;
}

u_int16_t TCPSegment::getSourcePort(){
    return m_tcpHeader.source_port;
}

u_int32_t TCPSegment::getAckNum(){
    return m_tcpHeader.ack_num;
}

u_int32_t TCPSegment::getSeqNum(){
    return m_tcpHeader.seq_num;
}

u_int16_t TCPSegment::getWindowSize(){
    return m_tcpHeader.window_size;
}

u_int16_t TCPSegment::getUrgentPointer(){
    return m_tcpHeader.urgent_pointer;
}

u_int8_t TCPSegment::getOffset(){
    return TCP_OFFS(m_tcpHeader.offs_res);
}

u_int8_t TCPSegment::getRes(){
    return (m_tcpHeader.offs_res & TCP_RES_MASK);
}

u_int16_t TCPSegment::getChecksum(){
    return m_tcpHeader.checksum;
}
