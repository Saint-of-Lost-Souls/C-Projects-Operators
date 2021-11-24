#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    printf("\n\n");
    // ~ Complement operator, flips the bits

    uint8_t a = 12; // a = 12 ---> 0000 1100 = 8(2*2*2)+ 4(2*2)
    uint8_t b = 5; //b = 5 ---> 0000 0101 = 4(2*2) + 1(2*0)

    printf("A = %u\n", a);
    printf("B = %u\n\n", b);
    printf("A & B = %u\n", a & b);
    printf("A | B = %u\n", a | b);
    printf("A ^ B = %u\n", a ^ b);
    printf("A << 1 %u\n", a << 1);
    printf("A >> 1 %u\n", a >> 1);
    
    printf("-------------Bitwise Table------------\n");
    printf("-----------------& AND----------------\n"); // are BOTH values = 1?
    printf("a = 12       | 0000 1100 |\n");
    printf("b =  5       | 0000 0101 |\n");
    printf("--------------------------------------\n");
    printf("a & b = 4    | 0000 0100 |\n");
    printf("--------------------------------------\n\n");
    printf("-------------Bitwise Table------------\n");
    printf("-----------------| OR-----------------\n"); // is ONE value = 1?
    printf("a = 12       | 0000 1100 |\n");
    printf("b =  5       | 0000 0101 |\n");
    printf("--------------------------------------\n");
    printf("a & b = 13   | 0000 1101 |\n");
    printf("--------------------------------------\n\n");
    printf("-------------Bitwise Table------------\n");  
    printf("-----------------^ XOR----------------\n"); // is ONE value NOT = 1?
    printf("a = 12       | 0000 1100 |\n");
    printf("b =  5       | 0000 0101 |\n");
    printf("--------------------------------------\n");
    printf("a & b = 9    | 0000 1001 |\n");
    printf("--------------------------------------\n\n");
    printf("-------------Bitwise Table------------\n");  
    printf("-------------------<<-----------------\n"); // shift value to right 
    printf("a = 12       | 0000 1100 |\n");
    printf("--------------------------------------\n");
    printf("a << 1 = 24  | 0001 1000 |\n");
    printf("--------------------------------------\n\n");
    printf("-------------Bitwise Table------------\n");  
    printf("------------------->>-----------------\n"); // shift value to left 
    printf("a = 12       | 0000 1100 |\n");
    printf("--------------------------------------\n");
    printf("a >> 1 = 6   | 0000 0110 |\n");
    printf("--------------------------------------\n\n");

    return EXIT_SUCCESS;
}
