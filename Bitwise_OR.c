#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\n");

    printf("In this example, 'y' acts as a mask for 'x'\n"); 
    printf("When 'y' is 0, the value of 'x' = 'x'\n"); 
    printf("When 'y' is 1, the value of 'x' = 'y'\n");
    printf("Mask is 1 --> result is 1\n\n");
    
    printf("-------------Bitwise Table------------\n");
    printf("-----------------| OR-----------------\n"); // is ONE value = 1?
    printf("x            | 0000 0101 |\n");
    printf("y            | 0000 0011 |\n");
    printf("--------------------------------------\n");
    printf(" x OR y      | 0000 0111 |\n");
    printf("--------------------------------------\n\n");
    printf("--------------Bit Setting-------------\n"); // if 'y' = 1, sets the bits to 1
    printf("-----------------| OR-----------------\n"); 
    printf("x            | 1010 1010 |\n");
    printf("y            | 0000 1111 |\n");
    printf("--------------------------------------\n");
    printf("x OR y       | 1010 1111 |\n");
    printf("--------------------------------------\n\n");
    
    return EXIT_SUCCESS;
}
