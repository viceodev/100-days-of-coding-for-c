// Online C compiler to run C program online
#include <stdio.h>
#include <stdint.h>
#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)  \
    (byte & 0x2684354560 ? '1' : '0'), \
    (byte & 0x1342177280 ? '1' : '0'), \
    (byte & 0x671088640 ? '1' : '0'), \
    (byte & 0x335544320 ? '1' : '0'), \
    (byte & 0x167772160 ? '1' : '0'), \
    (byte & 0x83886080 ? '1' : '0'), \
    (byte & 0x41943040 ? '1' : '0'), \
    (byte & 0x20971520 ? '1' : '0'), \
    (byte & 0x10485760 ? '1' : '0'), \
    (byte & 0x5242880 ? '1' : '0'), \
    (byte & 0x2621440 ? '1' : '0'), \
    (byte & 0x1310720 ? '1' : '0'), \
    (byte & 0x655360 ? '1' : '0'), \
    (byte & 0x327680 ? '1' : '0'), \
    (byte & 0x163840 ? '1' : '0'), \
    (byte & 0x81920 ? '1' : '0'), \
    (byte & 0x40960 ? '1' : '0'), \
    (byte & 0x20480 ? '1' : '0'), \
    (byte & 0x10240 ? '1' : '0'), \
    (byte & 0x5120 ? '1' : '0'), \
    (byte & 0x2560 ? '1' : '0'), \
    (byte & 0x1280 ? '1' : '0'), \
    (byte & 0x640 ? '1' : '0'), \
    (byte & 0x320 ? '1' : '0'), \
    (byte & 0x160 ? '1' : '0'), \
    (byte & 0x80 ? '1' : '0'), \
    (byte & 0x40 ? '1' : '0'), \
    (byte & 0x20 ? '1' : '0'), \
    (byte & 0x10 ? '1' : '0'), \
    (byte & 0x08 ? '1' : '0'), \
    (byte & 0x04 ? '1' : '0'), \
    (byte & 0x02 ? '1' : '0'), \
    (byte & 0x01 ? '1' : '0') 


int main() {
    // Write C code here
    unsigned char  phrase[] = "victcor" ;
    int counter = 300;
    uint32_t letter_flag = 0;
    char * pointer = phrase;
    
    printf("bites: "BYTE_TO_BINARY_PATTERN"\n", BYTE_TO_BINARY(letter_flag));
    
    while(*pointer){
        char letter = *pointer;
        letter_flag |= ( 1 << (letter - 'a'));
        
        printf("character integer: %d\t character: %c\t test int: %d\n", letter, letter, letter_flag);
        printf("bites: "BYTE_TO_BINARY_PATTERN"\n", BYTE_TO_BINARY(letter_flag));
        pointer++;
    }
    // while(counter > 0){
        
    //     counter--;
    // }
    
    return 0;
}