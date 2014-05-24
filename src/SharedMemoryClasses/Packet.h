#ifndef PACKET_H_
#define PACKET_H_

#include <string>
#include <pcap.h>


#include "EthernetFrame.h"
#include "WLANFrame.h"
#include "IPPacket.h"
#include "TCPSegment.h"
#include "HTTPPacket.h"


using namespace std;
class Packet{
private:

    EthernetFrame *m_etherHeader = NULL;
    WLANFrame *m_wlanHeader = NULL;
    IPPacket *m_ipHeader = NULL;
    TCPSegment *m_tcpHeader = NULL;
    HTTPPacket *m_httpHeader = NULL;

    const string *m_timeOfReceiving;

public:
    Packet();
    Packet(const u_char* capturedPacket, const char* timeRecv, u_int8_t ifType);
    ~Packet();


    //temporary method
    QString HeadersInfo() const;
    std::string AbridgedHeadersInfo() const;

    /* Just a thought: I should implement methods that get individual header
     * info
     * DONE.
     */

    std::string ethernetHeaderInfo() const;
    std::string wlanHeaderInfo() const;
    std::string ipHeaderInfo() const;
    std::string tcpHeaderInfo() const;

    //assignment operator
    Packet& operator=(const Packet& other);
    void SetPtrsToNull();
};

#endif
