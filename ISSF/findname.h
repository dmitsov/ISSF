#ifndef FIND_DEVICE_H__
#define FIND_DEVICE_H__

#include<pcap/pcap.h>
#include<list>
#include<string>


class NetworkInterfaceException{};

//this class finds the and chooses one the network interfaces
class NetworkInterface{
        std::list<std::string> devices;
        std::string devName_;
        std::list<pcap_addr*> addresses;
        pcap_addr* ifAddress;

public:

        NetworkInterface();

        //the method finds all the devices
        void findDevices();

        //getters and setters
        void SetDevice(int num);
        std::list<std::string>& GetList();
        std::string GetDevice();

        pcap_addr* GetIFAddress();




};


#endif

