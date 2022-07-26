#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


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
    double total_time_spent = 0.0;
    clock_t start = clock();

    int user_integer;

    // printf("Hello! Welcome to Viceo's Armstrong Number Checker.\n");
    // printf("What number would you like to check: ");
    // scanf("%d", &user_integer);

    // if(is_armstrong_number(user_integer)){
    //     printf("%d is an Armstrong Number", user_integer);
    // }else{
    //     printf("%d is an not Armstrong Number", user_integer);
        
    // }

    printf("%d", is_armstrong_number(9926315));

    clock_t end = clock();
    total_time_spent += (double)(end - start ) / CLOCKS_PER_SEC;
    printf("\n\n\n It took your program %f to run", total_time_spent);

    return 0;
}
