#include <stdio.h>

//An algorithm that calculates the hamming difference between two strands of DNA

/**
 * Author: @viceodev [on all social media]
 * Instruction: https://exercism.org/tracks/c/exercises/hamming
 * Instruction Author: Exercism
 */


int compute(const char *lhs, const char *rhs){
    int hamming_difference = 0;

    //this checks if any of the strings are empty
    if(!(*lhs) && !(*rhs)){
        return 0;
    }else if(!(*lhs) || !(*rhs)){
        return -1;
    }
    

    while(*lhs){
        //checks if the second string has a value at the current index
        if(!(*rhs)){
            return -1;
        }else{
            if(*lhs != *rhs){
                hamming_difference++;
            }
        }
        
        lhs++;
        rhs++;
    }


    //checks if the second string has a value after the iteration, which will mean the second string is longer
    if(*rhs){
        return -1;
    }


    return hamming_difference;
}


int main(){
    printf("hamming difference: %d\n", compute("G", "T"));
    printf("hamming difference: %d\n", compute("G", "T"));
    printf("hamming difference: %d\n", compute("G", "T"));
    printf("hamming difference: %d\n", compute("G", "T"));
    return 0;
}