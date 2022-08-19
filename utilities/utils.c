#include <stdio.h>
#include <time.h>

//reduce the bytes macros to the number of characters you need to display
#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)  \
    (byte & 0x2684354560 ? '1' : '0'), \
    (byte & 0x1342177280 ? '1' : '0'), \
    (byte & 0x671088640 ? '1' : '0'), \
    (byte & 0x335544320 ? '1' : '0'), \
    (byte & 0x167772160 ? '1' : '0'), \
    (byte & 0x83886080 ? '1' : '0'), \
    (byte & 0x41943040 ? '1' : '0'), \
    (byte & 0x20971520 ? '1' : '0'), \
    (byte & 0x10485760 ? '1' : '0'), \
    (byte & 0x5242880 ? '1' : '0'), \
    (byte & 0x2621440 ? '1' : '0'), \
    (byte & 0x1310720 ? '1' : '0'), \
    (byte & 0x655360 ? '1' : '0'), \
    (byte & 0x327680 ? '1' : '0'), \
    (byte & 0x163840 ? '1' : '0'), \
    (byte & 0x81920 ? '1' : '0'), \
    (byte & 0x40960 ? '1' : '0'), \
    (byte & 0x20480 ? '1' : '0'), \
    (byte & 0x10240 ? '1' : '0'), \
    (byte & 0x5120 ? '1' : '0'), \
    (byte & 0x2560 ? '1' : '0'), \
    (byte & 0x1280 ? '1' : '0'), \
    (byte & 0x640 ? '1' : '0'), \
    (byte & 0x320 ? '1' : '0'), \
    (byte & 0x160 ? '1' : '0'), \
    (byte & 0x80 ? '1' : '0'), \
    (byte & 0x40 ? '1' : '0'), \
    (byte & 0x20 ? '1' : '0'), \
    (byte & 0x10 ? '1' : '0'), \
    (byte & 0x08 ? '1' : '0'), \
    (byte & 0x04 ? '1' : '0'), \
    (byte & 0x02 ? '1' : '0'), \
    (byte & 0x01 ? '1' : '0') 

#define LARGE_INTEGER int
#define LARGE_INTEGER long long


int timeSpentStructure(){
    double time_spent = 0.0;
    clock_t start = clock();

    //bits to binary usage start
    char text[] = "victor";
    char * pointer = text;
    int count = 0;

    while(*pointer){
        char letter = pointer[count];

        printf("bits: "BYTE_TO_BINARY_PATTERN"\n", BYTE_TO_BINARY(letter));

        count++;
        pointer++;
    }
    
    //bits to binary usage start

    clock_t end = clock();
    time_spent += (double)( end - start) / CLOCKS_PER_SEC;
}


//for windows platform
// void benchmark()
// {
//     LARGE_INTEGER start_ticks, stop_ticks, ticks_per_second;
//     LONGLONG total_ticks = 0;
//     int iteration_count = 1000000;
//     for (int i = 0; i < iteration_count; i++)
//     {
//         QueryPerformanceCounter(&start_ticks);

//         is_isogram("Thumbscrew-Japingly");
//         // is_pangram("the_quick_brown_fox_jumps_over_the_lazy_dog");
//         // square_root(65025);
//         // is_armstrong_number(9926315);
//         // compute("GGACGGATTCTG", "AGGACGGATTCT"); // hamming
//         // difference_of_squares(100);
//         // triangle_t sides = {5, 4, 6};
//         // is_equilateral(sides);

//         QueryPerformanceCounter(&stop_ticks);
//         total_ticks += (stop_ticks.QuadPart - start_ticks.QuadPart);
//     }
//     QueryPerformanceFrequency(&ticks_per_second);
//     double mark = ((double)total_ticks / iteration_count) / (double)ticks_per_second.QuadPart;
//     printf("%g\n", mark);
// }

int main(){
    timeSpentStructure();
}