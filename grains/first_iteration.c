#include <stdio.h>
#include <stdint.h>

/**
 * Author: @viceodev [on all social media]
 * Instruction: https://exercism.org/tracks/c/exercises/grains
 */

uint64_t square(uint8_t  index){

    if(index <= 0 || index > 64){
        return 0;
    }

    return (1ull << (index - 1));
}

uint64_t total(void){
    unsigned long long total = 0;
    int counter = 0;
    
    while(counter < 64){
        total += (1ull << (counter - 1));
        counter++;
    }

    return total;
}

int main(){
    printf("%llu\n", square(35));
    printf("%llu", total());

    return 0;
}