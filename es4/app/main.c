#include <stdio.h>
#include "stdint.h"
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    uint32_t a = 32767;
    uint32_t a2 = 35000;

    uint16_t * bytes = (uint16_t*) &a;
    uint8_t * b2 = (uint8_t*) &a;


    printf("%x%x\n", bytes[0], bytes[1]);
    printf("%x%x%x%x\n", b2[0], b2[1], b2[2], b2[3]);

    bytes = (uint16_t*) &a2;
    b2 = (uint8_t*) &a2;

    printf("%x%x\n", bytes[0], bytes[1]);
    printf("%x%x%x%x\n", b2[0], b2[1], b2[2], b2[3]);
}