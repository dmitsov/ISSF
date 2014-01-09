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
    memset(&ethernetHeader,0,sizeof(ethernet_info));
    memcpy(&ethernetHeader,packet,ETHER_HEADR_LEN);
}
EthernetFrame::~EthernetFrame()
{
}

char* EthernetFrame::getSourceMACAddress() const {
    return MACtoCString(ethernetHeader.ether_source_addr);
}

char* EthernetFrame::getDestinationMACAddress() const {
    return MACtoCString(ethernetHeader.ether_dest_addr);
}

u_short EthernetFrame::getFrameType(){
    return ethernetHeader.ether_type;
}

const u_char* EthernetFrame::NetworkLayerPacket(){
    return &m_LinkLayerPacket[ETHER_HEADR_LEN];
}
