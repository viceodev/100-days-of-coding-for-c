// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0') 


bool is_isogram( const char phrase[]){
    if(phrase == 0){
        return false;
    }

    bool is_isogram_status = true;
    
    while(*phrase){
        char letter = *phrase;
        
        printf("charcater int: %d\t bites: "BYTE_TO_BINARY_PATTERN"\t", letter , BYTE_TO_BINARY(letter));
        letter += 32;
        printf("funny character: %c\t bites: "BYTE_TO_BINARY_PATTERN, letter, BYTE_TO_BINARY(letter));
        
        int generic = (1 << (letter - 'a'));
        
        printf("\tbites: "BYTE_TO_BINARY_PATTERN"\n", BYTE_TO_BINARY(generic));
        
        
        *phrase++;
    }
    
    return is_isogram_status;
}

int main() {
    // Write C code here
    printf("Hello world %d", is_isogram("victor"));

    return 0;
}