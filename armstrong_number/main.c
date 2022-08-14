#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

/**
 * Author: @viceodev [on all social media]
 * Instruction: https://exercism.org/tracks/c/exercises/armstrong-numbers
 */


int intLen(int integer){
    return ceil(log10(abs(integer)));
}

bool is_armstrong_number(int integer){
    int total = 0;
    int integer_length = intLen(integer);
    int count = integer_length;
    int integer_copy = integer;

    while(count > 0){
        int single_int = integer_copy % 10;
        int power = 1;

        for(int i = 0; i < integer_length; i++){
            power *= single_int;
        }

        total += power;
        integer_copy /= 10;
        count--;
    }

    return total == integer;
}

int main(){
    printf("%d", is_armstrong_number(999999999));
    return 0;
}
