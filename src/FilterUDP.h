#ifndef FILTERUDP_H
#define FILTERUDP_H
#include <string>
#include <vector>

class FilterUDP{
private:
    static std::string srcPortFilter(std::string& operation, std::string& value);
    static std::string dstPortFilter(std::string& operation, std::string& value);
    static std::string lenFilter(std::string& operation, std::string& value);
    static std::string checksFilter(std::string& operation, std::string& value);

public:
    static std::string udpFilter(std::vector<std::string>& filterStringVector);

};


#endif // FILTERUDP_H
