#include <stdio.h>

/**
 * Author: @viceodev [on all social media]
 * Instruction: https://exercism.org/tracks/c/exercises/square-root
 * Instruction Author: Exercism
 * Note: This only work for perfect squares
 */

int square_root(int square){
    unsigned int sqrt =  square, start = 1, end = square;

    while((sqrt * sqrt) != square){
        sqrt = ( start + end ) >> 1;

        // this avoids an infinite loop
        if(sqrt == start || sqrt == end){
            start = start >> 2;
            end = end >> 2;
        }
        
        if((sqrt * sqrt) > square){
            end = sqrt;
        }else{
            start = sqrt;
        }
    }

    return sqrt;
}

int main(){
    printf("square root %d", square_root(8100));
    return 0;
}