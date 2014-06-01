#include <string>
#include <pcap.h>
#include <cstring>
#include <vector>
#include <boost/algorithm/string.hpp>
#include "Filter.h"
#include "FilterEther.h"
#include "FilterIP.h"
#include "FilterTCP.h"
#include "FilterUDP.h"
#include "FilterMacrosHeader.h"
using namespace std;

Filter::Filter()
{
}

Filter::~Filter()
{
}

void Filter::makeFilter(vector<string>& protocol){
    string temp = protocol.front();
    vector<string> stringVector;
    vector<string> protoAndField;
    boost::split(protoAndField,temp,boost::is_any_of("."));
    string proto = protoAndField.front();

    stringVector.push_back(protoAndField.back());
    for(int i = 1; i < (int)protocol.size();i++){
        stringVector.push_back(protocol[i]);
    }

    if(ETHER_PROTO(proto.c_str())){
       m_filter = FilterEther::getEtherFilter(stringVector);
    } else if(IP_PROTO(proto.c_str())){
        m_filter = FilterIPv4::ipFilter(stringVector);
    } else if(TCP_PROTO(proto.c_str())){
        m_filter = FilterTCP::tcpFilter(stringVector);
    } else if(UDP_PROTO(proto.c_str())){
        m_filter = FilterUDP::udpFilter(stringVector);
    }

}


bpf_program* Filter::compileFilter(pcap_t *dev, string& filter){

    vector<string> filterExpression;
    string temp;
    boost::split(filterExpression,filter,boost::is_any_of(" "));


    makeFilter(filterExpression);

    bpf_program *filterProgram = new bpf_program;

    if(pcap_compile(dev,filterProgram,m_filter.c_str(),0,PCAP_NETMASK_UNKNOWN) < 0){

        pcap_perror(dev,"Compile");
    }

    return filterProgram;

}
