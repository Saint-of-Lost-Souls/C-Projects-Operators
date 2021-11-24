#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\n");
    
    printf("In this example, 'y' acts as a mask for 'x'\n"); 
    printf("When 'y' is 0, the value of 'x' = 'x'\n"); 
    printf("When 'y' is 1, the value of 'x'is reversed'\n");
    printf("Mask is 1 --> input toggle\n\n");
    
    printf("-------------Bitwise Table------------\n");
    printf("-----------------^ XOR----------------\n"); // is ONE value NOT = 1?
    printf("x            | 0000 0101 |\n");
    printf("y            | 0000 0011 |\n");
    printf("--------------------------------------\n");
    printf(" x XOR y     | 0000 0110 |\n");
    printf("--------------------------------------\n\n");
    printf("--------------Bit Toggling------------\n"); // reverses 'x'.
    printf("-----------------^ XOR----------------\n"); 
    printf("x            | 1010 1010 |\n");
    printf("y            | 0000 1111 |\n");
    printf("--------------------------------------\n");
    printf("x XOR y      | 1010 0101 |\n");
    printf("--------------------------------------\n\n");
    return EXIT_SUCCESS;
}
