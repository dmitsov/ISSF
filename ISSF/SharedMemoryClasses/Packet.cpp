#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <arpa/inet.h>
#include <features.h>
#include <netinet/in.h>

#include "HelperFunctions.h"
#include "IPPacket.h"
#include "TCPSegment.h"
#include "EthernetFrame.h"
#include "WLANFrame.h"
#include "HeaderTypes.h"
#include "SharedMemoryClasses/Packet.h"

Packet::Packet(const u_char *packet){
    m_etherHeader = new EthernetFrame(packet);
    if(m_etherHeader->getFrameType() == ETHER_TYPE_IP){
        m_ipHeader = new IPPacket(m_etherHeader->NetworkLayerPacket());
        if(m_ipHeader->getProtocolType() == IP_PROTO_TCP){
            m_tcpHeader = new TCPSegment(m_ipHeader->TransportLayerSegment());
        }
    }
}
