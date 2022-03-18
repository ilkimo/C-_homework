
#ifndef C__HOMEWORK_MARSHALLING_H
#define C__HOMEWORK_MARSHALLING_H

#include "stdint.h"


typedef unsigned char BYTE;

typedef struct _Packet {
    uint32_t senderID;
    uint32_t packetType;
    int32_t altitude;
    int32_t longitude;
    int32_t latitude;
    BYTE flags;
    BYTE ext;
} Packet;

uint8_t* marshal(Packet* p);

Packet* unmarshal(uint8_t* data);

#endif //C__HOMEWORK_MARSHALLING_H
