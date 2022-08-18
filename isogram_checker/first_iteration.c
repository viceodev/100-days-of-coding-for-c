#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

/**
 * Author: @viceodev [on all social media]
 * Instruction: https://exercism.org/tracks/c/exercises/isogram
 * Instruction Author: Exercism
 */

bool is_isogram( const char phrase[]){
    if(phrase == 0){
        return false;
    }

    int string_length = strlen(phrase);
    bool is_isogram_status = true;
    
    for(int current_char = 0; current_char < string_length; current_char++){
        if(is_isogram_status == false){
            break;
        }else if(phrase[current_char] == '-' || phrase[current_char] == ' '){
            continue;
        }
        
        for(int i = 0; i < string_length; i++){
            if(current_char == i){
                continue;
            }
            ;
            
            if(tolower(phrase[current_char]) == tolower(phrase[i])){
                is_isogram_status = false;
                break ;
            }
        }
    }
    
    return is_isogram_status;
}

int main() {
    // Write C code here
    printf("Hello world %d", is_isogram("victor"));

    return 0;
}