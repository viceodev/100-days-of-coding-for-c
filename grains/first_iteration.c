#include <stdio.h>
#include <stdint.h>

//unfinished
uint64_t raise_to_two(int index){
    if(index < 32){
        return (1 << (index - 1));
    }else if(index > 32 && index < 64){
        int multiple = (index - 32);

        return (1 << (multiple - 1)) * 2;
    }else{
        int multiple = index / 32;
        printf("multiple %d", multiple);
        return (1 << (multiple - 1)) * multiple * -1;
    }
}

uint64_t square(uint8_t  index){
    if(index <= 0){
        return 0;
    }


    return raise_to_two(index);
}

uint64_t total(){
    uint64_t total = 0;

    for(int i = 64; i > 0; i--){
        // printf("total %d\n", (1 << (i - 1)));
        total += (1 << (i - 1));
    }

    return total;
}

int main(){
    printf("%d\n", square(64));
    printf("%d", total());

    return 0;
}