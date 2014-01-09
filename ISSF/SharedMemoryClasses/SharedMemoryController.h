#ifndef SHAREDMEMORYCONTROLLER_H
#define SHAREDMEMORYCONTROLLER_H

#include <stdio.h>
#include <iostream>
#include <string>



/*TODO:
 *- implement a custom container that contains the data we receive
 *- implement memory allocation
 *- implement a thread synchronization class(on a second thought better not to put this here)
 *- put them all here
 */
class SharedMemoryController{
 private:
    string m_filterString;
    //vector needed. To implement

    //methods that add or delete headers to the vector


    void pktVectorRmv();
    void sndFilterStringSignal();

public:
    SharedMemoryController();
    ~SharedMemoryController();

    //this method updates the filter string
    void setFilterString(string &filterString);
    //this method updates the vector which contains the headers of the packets we receiv
    void updtQtPacketField();
    void pktVectorAdd();
};


#endif // SHAREDMEMORYCONTROLLER_H
