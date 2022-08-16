#include <stdio.h>

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

int main (){
    printf("sum of squares %d", sum_of_squares(5));
    printf("square of sum %d", square_of_sum(5));
    return 0;
}
