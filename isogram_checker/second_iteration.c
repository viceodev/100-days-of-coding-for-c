// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <time.h>

/**
 * Author: @viceodev [on all social media]
 * Instruction: https://exercism.org/tracks/c/exercises/isogram
 * Instruction Author: Exercism
 */

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
    printf("is isogram: %d\n", is_isogram("victor"));

    return 0;
}