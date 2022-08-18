#include <stdio.h>

/**
 * Author: @viceodev [on all social media]
 * Instruction: https://exercism.org/tracks/c/exercises/square-root
 * Instruction Author: Exercism
 */

int square_root(int square){
    int sqrt =  square, start = 1, end = square;

    while((sqrt * sqrt) != square){
        sqrt =  ( start + end ) / 2;
        printf("start : %d ; end: %d; sqrt %d \n", start, end,sqrt);
        
        if((sqrt * sqrt) > square){
            end = sqrt;
        }else{
            start = sqrt;
        }
    }

    return sqrt;
}

int main(){
    printf("square root %d", square_root(1000000));
    return 0;
}