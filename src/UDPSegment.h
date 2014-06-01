#ifndef UDPSEGMENT_H
#define UDPSEGMENT_H
#include "HeaderTypes.h"
#include "include/AbstractHeader.h"

class UDPSegment: public AbstractHeader{
private:
    udp_info m_udpHeader;
public:
    UDPSegment(const u_char* packet);
    UDPSegment(const UDPSegment& other);
    ~UDPSegment();

    u_int16_t getSrcPort();
    u_int16_t getDstPort();
    u_int16_t getLength();
    u_int16_t getChecksum();

    const u_char* ApplicationLayerSegment();
};

#endif // UDPSEGMENT_H
