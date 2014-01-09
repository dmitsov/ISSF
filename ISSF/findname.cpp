#include <list>
#include <iterator>
#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>
#include "findname.h"
#include <pcap.h>
using namespace std;

NetworkInterface::NetworkInterface()
{
}

void NetworkInterface::findDevices(){
    pcap_if_t* devList = NULL;
    char errbuf[PCAP_ERRBUF_SIZE];

    memset(errbuf,0,PCAP_ERRBUF_SIZE);

    if(pcap_findalldevs(&devList,errbuf) < 0){
        throw new NetworkInterfaceException();
    }




    do{
        string name(devList->name);
        devices.push_back(name);
        addresses.push_back(devList->addresses);
        devList = devList->next;

    }while(devList);

}

void NetworkInterface::SetDevice(int num){
    int i = 0;
    for(list<string>::iterator it = devices.begin(); it != devices.end();++it){
        i++;
        if(i == num){
            this->devName_ = *it;
            break;
        }
    }
    i = 0;
    for(list<pcap_addr*>::iterator it = addresses.begin(); it != addresses.end(); ++it){
        i++;
        if(i == num){
            this->ifAddress = *it;
            return;
        }
    }
    throw new NetworkInterfaceException();
}



string NetworkInterface::GetDevice(){
    return this->devName_;
}

list<string>& NetworkInterface::GetList(){
    return this->devices;
}

pcap_addr* NetworkInterface::GetIFAddress(){
    return ifAddress;
}


