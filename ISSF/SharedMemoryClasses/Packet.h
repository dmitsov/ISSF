#ifndef PACKET_H_
#define PACKET_H_

#include "EthernetFrame.h"
#include "WLANFrame.h"
#include "IPPacket.h"
#include "TCPSegment.h"

class Packet{
private:
    EthernetFrame *m_etherHeader;
    WLANFrame *m_wlanHeader;
    IPPacket *m_ipHeader;
    TCPSegment *m_tcpHeader;

public:
    Packet(const u_char* capturedPacket);
    ~Packet();

    //temporary method
    const char* HeadersInfo();

    /* Just a thought: I should implement methods that get individual header
     * info
     */

};

#endif
