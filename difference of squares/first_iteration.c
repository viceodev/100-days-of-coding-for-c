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

int main (){
    printf("sum of squares %d", sum_of_squares(5));
    printf("square of sum %d", square_of_sum(5));
    return 0;
}
