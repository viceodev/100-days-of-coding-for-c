#include <stdio.h>


/**
 * Author: @viceodev [on all social media]
 * Instruction: https://exercism.org/tracks/c/exercises/grains
 * Instruction Author: Exercism
 */

unsigned int sum_of_squares(unsigned int number){
    unsigned int counter = 0;
    
    while(number){
        counter += (number * number);
        number--;
    }

    return counter;
}


unsigned int square_of_sum(unsigned int number){
    unsigned int counter = 0;

    while(number){
        counter += number;
        number--;
    }

    return (counter * counter);
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