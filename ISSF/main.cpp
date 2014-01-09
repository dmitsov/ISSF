#include <stdio.h>
#include <iostream>
#include <cstring>
#include <pcap.h>
#include <iterator>
#include <list>
#include <features.h>
#include <netinet/in.h>
#include <arpa/inet.h>



#include "findname.h"
#include "HeaderTypes.h"
#include "HelperFunctions.h"
#include "WLANFrame.h"
#include "EthernetFrame.h"
#include "include/LinkLayerData.h"



using namespace std;




void PacketHandler(u_char *args, const struct pcap_pkthdr *pkthdr, const u_char *packet);

int main(int argc, char **argv){

    printf("It works\n");
    NetworkInterface networkIf;
    networkIf.findDevices();

    networkIf.SetDevice(1);

    char errbuf[PCAP_ERRBUF_SIZE];
    pcap_t *Pcap_device = pcap_open_live(networkIf.GetDevice().c_str(),PACKET_BUFFSIZE,0,0,errbuf);
    memset(errbuf,0,PCAP_ERRBUF_SIZE);
    if(!Pcap_device){
        fprintf(stderr,"Error in opening: %s",errbuf);
    }


//    printf("Device: %s\n",networkIf.GetDevice().c_str());
    pcap_pkthdr pkthdr;
   // u_char *packet = (u_char*)pcap_next(Pcap_device,&pkthdr);
    wlan_info wlanInfo;

    memset(&wlanInfo,0,sizeof(wlan_info));
   // printf("Error: %s\n",errbuf);
  //  memcpy(wlanInfo.address1,&packet[4],ETHER_ADDR_LEN);
    pcap_loop(Pcap_device,-1,(pcap_handler)PacketHandler,NULL);

    return 0;
}

//this method is temporary
void PacketHandler(u_char *args, const struct pcap_pkthdr *pkthdr, const u_char *packet){

    EthernetFrame etherFrame(&packet[2]);


   // cout << "Packet size: " << pkthdr->len << endl;
    //cout << "Source address: " << etherFrame.getDestinationMACAddress() << endl;
}



