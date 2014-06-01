#include <cstring>
#include "UDPSegment.h"
#include "HeaderTypes.h"
#include "include/AbstractHeader.h"


UDPSegment::UDPSegment(const u_char *packet)
    :AbstractHeader(packet)
{
    memset(&m_udpHeader,0,sizeof(udp_info));
    memcpy(&m_udpHeader.src_port,packet,2);
    memcpy(&m_udpHeader.dst_port,(packet+2),2);
    memcpy(&m_udpHeader.length,(packet+4),2);
    memcpy(&m_udpHeader.checksum,(packet + 6),2);
}

UDPSegment::UDPSegment(const UDPSegment& other)
    :AbstractHeader(other.m_packet)
{
    memset(&m_udpHeader,0,sizeof(udp_info));
    memcpy(&m_udpHeader,&other.m_udpHeader,sizeof(udp_info));
}

UDPSegment::~UDPSegment(){
}

u_int16_t UDPSegment::getSrcPort(){
    return m_udpHeader.src_port;

}

u_int16_t UDPSegment::getDstPort(){
    return m_udpHeader.dst_port;
}

u_int16_t UDPSegment::getLength(){
    return m_udpHeader.length;

}

u_int16_t UDPSegment::getChecksum(){
    return m_udpHeader.checksum;
}

const u_char* UDPSegment::ApplicationLayerSegment(){
    return &m_packet[UDP_HEADER_LENGTH];
}



