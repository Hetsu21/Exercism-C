#include "grains.h"
uint64_t square(uint8_t index){
    uint64_t square = 1;
    if (index >64 || index == 0 )
        square=0;
    
    for (int i = 1 ; i<index ; i++)
        square *= 2;
    
    return square; 
}
uint64_t total(void) {
    return UINT64_MAX;
}