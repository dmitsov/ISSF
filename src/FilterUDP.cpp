#include <string>
#include <vector>
#include "FilterUDP.h"
#include "FilterMacrosHeader.h"

using namespace std;

string FilterUDP::udpFilter(vector<string>& filterStringVector){
    string filter;
    string udpField = filterStringVector[0];
    string operation = filterStringVector[1];
    string value = filterStringVector[2];

    if(UDP_SRC_PORT(udpField.c_str())){
        filter += srcPortFilter(operation,value);
    } else if (UDP_DST_PORT(udpField.c_str())){
        filter += dstPortFilter(operation,value);
    } else if(UDP_LENGTH(udpField.c_str())){
        filter += lenFilter(operation,value);
    } else if (UDP_CHECKSUM(udpField.c_str())){
        filter += checksFilter(operation,value);
    }
    return filter;
}

string FilterUDP::srcPortFilter(string &operation, string &value){
    string filter("udp[0:2] ");

    return filter + operation + value;
}

string FilterUDP::dstPortFilter(string &operation, string &value){
    string filter("udp[2:2] ");

    return filter + operation + value;
}

string FilterUDP::lenFilter(string &operation, string &value){
    string filter("udp[4:2] ");

    return filter + operation + value;
}

string FilterUDP::checksFilter(string &operation, string &value){
    string filter("udp[6:2] ");

    return filter + operation + value;
}

