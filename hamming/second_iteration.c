#include <stdio.h>

//An algorithm that calculates the hamming difference between two strands of DNA

int compute(const char *lhs, const char *rhs){
    int hamming_difference = 0;


    while(*lhs && *rhs){
        if(*lhs != *rhs){
            hamming_difference++;
        }
        
        lhs++;
        rhs++;
    }


    //checks if any of the strings has a value after the iteration, which will mean that string is longer
    if(*rhs || *lhs){
        return -1;
    }


    return hamming_difference;
}


int main(){
    printf("hamming difference: %d\n", compute("G", "T"));
    printf("hamming difference: %d\n", compute("GGACTGAAATCTG", "GGACTGAAATCTG"));
    printf("hamming difference: %d\n", compute("GGACGGATTCTG", "AGGACGGATTCT"));
    printf("hamming difference: %d\n", compute("AATG", "AAA"));
    return 0;
}