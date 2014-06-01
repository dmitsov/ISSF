#include <stdio.h>
#include <cstring>
#include <features.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include "HeaderTypes.h"
#include "WLANFrame.h"
#include "HelperFunctions.h"


//constructor & destructor
WLANFrame::WLANFrame(const u_char *packet)
:LinkLayerData(packet)
{
    memset(&m_wlanHeadr,0,WLAN_HEADR_LEN);

    memcpy(&m_wlanHeadr.frame_controll,packet,2);
    memcpy(&m_wlanHeadr.duration,(packet+2),2);
    memcpy(&m_wlanHeadr.address1,(packet+4),6);
    memcpy(&m_wlanHeadr.address2,(packet+10),6);
    memcpy(&m_wlanHeadr.address3,(packet+16),6);
    memcpy(&m_wlanHeadr.sequence_control,(packet+22),2);
    memcpy(&m_wlanHeadr.address4,(packet+24),6);


}

WLANFrame::WLANFrame(const WLANFrame &other)
:LinkLayerData(other.m_packet)
{
    memset(&m_wlanHeadr,0,WLAN_HEADR_LEN);
    memcpy(&m_wlanHeadr,&(other.m_wlanHeadr),sizeof(wlan_info));
}

WLANFrame::~WLANFrame(){
}

char* WLANFrame::getSourceMACAddress() const {
    u_int16_t typeOfDS = (m_wlanHeadr.frame_controll & 0x00C0);
    switch(typeOfDS){
        case 0: return MACtoCString(m_wlanHeadr.address2);
        case 0x0040: return MACtoCString(m_wlanHeadr.address3);
        case 0x0080: return MACtoCString(m_wlanHeadr.address2);
        case 0x00C0: return MACtoCString(m_wlanHeadr.address4);
    }
    return 0;
}

char* WLANFrame::getDestinationMACAddress() const {
    u_int16_t typeOfDS = (m_wlanHeadr.frame_controll & 0x00C0);
    switch(typeOfDS){
        case 0: return MACtoCString(m_wlanHeadr.address1);
        case 0x0040: return MACtoCString(m_wlanHeadr.address1);
        case 0x0080: return MACtoCString(m_wlanHeadr.address3);
        case 0x00C0: return MACtoCString(m_wlanHeadr.address3);
    }
    return 0;
}

bool WLANFrame::isDataFrame(){
    u_int16_t type = (m_wlanHeadr.frame_controll & WLAN_HEADR_TYPE_MASK);

    if(type == WLAN_FRAME_TYPE_DATA)
        return true;

    return false;
}

bool WLANFrame::isControlFrame(){
    u_int16_t type = (m_wlanHeadr.frame_controll & WLAN_HEADR_TYPE_MASK);

    if(type == WLAN_FRAME_TYPE_CONTROLL)
        return true;
    return false;
}

bool WLANFrame::isManagementFrame(){
      u_int16_t type = (m_wlanHeadr.frame_controll & WLAN_HEADR_TYPE_MASK);

    if(type == WLAN_FRAME_TYPE_MANAGEMENT)
        return true;
    return false;
}

const u_char* WLANFrame::NetworkLayerPacket(){
    return &m_packet[WLAN_HEADR_LEN];
}
