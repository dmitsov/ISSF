#include <stdio.h>
#include <cstring>
#include <features.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include "HeaderTypes.h"
#include "EthernetFrame.h"
#include "HelperFunctions.h"


EthernetFrame::EthernetFrame(const u_char *packet)
:LinkLayerData(packet)
{
    memset(&m_ethernetHeader,0,sizeof(ethernet_info));
    memcpy(&m_ethernetHeader.ether_dest_addr,packet,6);
    memcpy(&m_ethernetHeader.ether_source_addr,(packet+6),6);
    memcpy(&m_ethernetHeader.ether_type,(packet+12),2);
}

EthernetFrame::EthernetFrame(const EthernetFrame &other)
:LinkLayerData(other.m_packet)
{
    memset(&m_ethernetHeader,0,sizeof(ethernet_info));
    memcpy(&m_ethernetHeader,&(other.m_ethernetHeader),sizeof(ethernet_info));
}

EthernetFrame::~EthernetFrame()
{

}

char* EthernetFrame::getSourceMACAddress() const {
    return MACtoCString(m_ethernetHeader.ether_source_addr);
}

char* EthernetFrame::getDestinationMACAddress() const {
    return MACtoCString(m_ethernetHeader.ether_dest_addr);
}

u_short EthernetFrame::getFrameType(){
    return m_ethernetHeader.ether_type;
}

const u_char* EthernetFrame::NetworkLayerPacket(){
    return &m_packet[ETHER_HEADR_LEN];
}
