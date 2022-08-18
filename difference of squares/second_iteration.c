#include <stdio.h>

/**
 * Author: @viceodev [on all social media]
 * Instruction: https://exercism.org/tracks/c/exercises/grains
 * Instruction Author: Exercism
 */


unsigned int sum_of_squares(unsigned int number){
    unsigned int sum = (number * (number + 1) * ((number * 2) + 1)) / 6;
    return sum;
}

unsigned int square_of_sum(unsigned int number){
    unsigned int sum = (number * (number + 1)) / 2;
    return sum * sum;
}

unsigned int difference_of_squares(unsigned int number){
    return square_of_sum(number) - sum_of_squares(number);
}

int main(){
    printf("Sum of Squares %d\n", sum_of_squares(10));
    printf("Squares Of Sum %d\n", square_of_sum(10));
    printf("Difference of squares %d\n", difference_of_squares(10));
    return 0;
}