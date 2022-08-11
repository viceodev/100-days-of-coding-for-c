// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <time.h>

bool is_isogram(const char phrase[]){
    if(!phrase){
        return false;
    }
    
    uint32_t char_checks = 0;
    
    while(*phrase){
        char current_letter = *phrase;

        if(current_letter >= 'A' && current_letter <= 'Z'){
            current_letter += 32;
        }
        
        if(current_letter >= 'a' && current_letter <= 'b'){
            uint32_t left_switch = (1 << (current_letter - 'a'));

            if((char_checks & left_switch) != 0){
                return false;
                ;
            }else{
                char_checks |= left_switch;
            }
                        
        }

        phrase++;
    }

    return true;
}


int main() {
    double time_spent = 0.0;
    clock_t start = clock();

    //bits to binary usage start
    printf("%d\n", is_isogram("victor"));
    
    //bits to binary usage start

    clock_t end = clock();
    time_spent += (double)( end - start) / CLOCKS_PER_SEC ;

    return 0;
}