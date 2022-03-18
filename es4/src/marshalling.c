
#include "marshalling.h"
#include <stdlib.h>

uint8_t* marshal(Packet* p) {
    uint8_t* res = 0;

    //use packet


    free(p);
    return res; //TODO()
}

Packet* unmarshal(uint8_t* data) {
    Packet *res = (Packet*) malloc(sizeof(Packet));

    return res; //TODO()
}