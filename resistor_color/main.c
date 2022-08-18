#include <stdio.h>

/**
 * Author: @viceodev [on all social media]
 * Instruction: https://exercism.org/tracks/c/exercises/resistor-color
 * Instruction Author: Exercism
 */

typedef enum {
    BLACK,
    BROWN,
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE,
} resistor_band_t;

int color_code(int color){
    resistor_band_t color_code = color;
    return color_code;
}

resistor_band_t * colors(){
    static resistor_band_t color_bands[10];

    for(resistor_band_t band = BLACK; band <= WHITE; band++){
        color_bands[band] = band;
    }

    return color_bands;
}

int main(){
    printf("Get single color value %d", color_code(WHITE));
    return 0;
}