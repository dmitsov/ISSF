#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <arpa/inet.h>
#include <features.h>
#include <netinet/in.h>



#include "HeaderTypes.h"
#include "HelperFunctions.h"
#include "IPPacket.h"


IPPacket::IPPacket(const u_char* packet)
:m_packet(packet)
{
    memset(&m_ipHeader,0,IP_HEADER_LENGTH);
    memcpy(&m_ipHeader,packet,sizeof(ip_info));
}

IPPacket::~IPPacket()
{
}

char* IPPacket::getSourceIPAddress(){
    return inet_ntoa(m_ipHeader.ip_src);
}

char* IPPacket::getDestinationIPAddress(){
    return inet_ntoa(m_ipHeader.ip_dst);
}

const u_char* IPPacket::TransportLayerSegment(){
    return &m_packet[IP_HL(&m_ipHeader)];
}

u_int8_t IPPacket::getTTL(){
    return m_ipHeader.ip_ttl;
}

u_int8_t IPPacket::getProtocolType(){
    return m_ipHeader.ip_p;
}

u_short IPPacket::getPacketLength(){
    return m_ipHeader.ip_len;
}

u_int8_t IPPacket::getTypeOfService(){
    return m_ipHeader.ip_tos;
}

u_short IPPacket::getID(){
    return m_ipHeader.ip_id;
}

u_short IPPacket::getOffset(){
    return (m_ipHeader.ip_off & IP_OFFMASK);
}

bool IPPacket::isIPv4(){
    return (IP_V(&m_ipHeader) == 4);
}

bool IPPacket::isIPv6(){
    return (IP_V(&m_ipHeader) == 6);
}

//checks if the Don't Fragment flag is set
bool IPPacket::isDFSet(){
    return (m_ipHeader.ip_off & IP_DF);
}

bool IPPacket::isMFSet(){
    return (m_ipHeader.ip_off & IP_MF);
}
