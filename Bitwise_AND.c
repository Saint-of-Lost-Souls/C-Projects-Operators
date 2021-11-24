#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\n");

    printf("In this example, 'y' acts as a mask for 'x'\n"); 
    printf("When 'y' is 0, the value of 'x' = 'y'\n"); 
    printf("When 'y' is 1, the value of 'x' = 'x'\n");
    printf("Mask is 0 --> result is 0\n"); // Bit clearing
    printf("Mask is 1 --> input pass\n\n"); // Bit testing

        
    printf("-------------Bitwise Table------------\n");
    printf("-----------------& AND----------------\n"); // are BOTH values = 1?
    printf("x            | 0000 0101 |\n");
    printf("y            | 0000 0011 |\n");
    printf("--------------------------------------\n");
    printf(" x AND y     | 0000 0001 |\n");
    printf("--------------------------------------\n\n");
    printf("--------------Bit Clearing------------\n"); // if 'y' = 0, clears the bits to 0
    printf("-----------------& AND----------------\n"); 
    printf("x            | 1010 1010 |\n");
    printf("y            | 0000 1111 |\n");
    printf("--------------------------------------\n");
    printf("x AND y      | 0000 1010 |\n");
    printf("--------------------------------------\n\n");
    printf("---------------Bit Testing------------\n");
    printf("-----------------& AND----------------\n"); // testing individual bits. 'b' indicates which position to check.
    printf("x            | 1010 1010 |\n");
    printf("y            | 0000 1000 |\n");
    printf("--------------------------------------\n");
    printf("z != 0       | 0000 1000 |\n\n");
    printf("--------------------------------------\n\n");
    return EXIT_SUCCESS;
}
