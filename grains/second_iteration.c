#include <stdio.h>
#include <stdint.h>

/**
 * Author: @viceodev [on all social media]
 * Instruction: https://exercism.org/tracks/c/exercises/grains
 * Instruction Author: Exercism
 */

uint64_t square(uint8_t  index){
    return (index > 0 && index <= 64) ? (1ull << (index - 1)) : 0;
}

uint64_t total(void){
    return UINT64_MAX;
}

int main(){
    printf("%llu\n", square(0));
    printf("%llu", total());

    return 0;
}