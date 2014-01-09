#ifndef PACKET_VECTOR_H
#define PACKET_VECTOR_H

#include "SharedMemoryClasses/Packet.h"
#include ""




//this is a custon vector that I use to store the packets
// may not needed
class PktVector{
private:
        Packet *m_collection;
        u_int32_t m_capacity;
        u_int32_t m_size;

public:
        PktVector();
        PktVector(u_int32_t capacity);

        void push_back(Packet &packet);
        void push_front(Packet &packet);

        void pop_back();
        void pop_front();

        Packet& front();
        Packet& back();


        class iterator{


        };

};

#endif // PACKETVECTOR_H
