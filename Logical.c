#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int main()
{
    printf("\n\n");
    // && AND binary, both values
    // || OR  binary, both values
    //  ! NOT unary, one value

    printf("-------------Truth Table------------\n");
    printf("--------1 = TRUE, FALSE = 0---------\n");
    printf("------------------------------------\n");
    printf("| x | y | x AND y | x OR y | NOT x |\n");
    printf("------------------------------------\n");

    bool x, y;
    // AND is only 1 when both values are 1
    // OR is only 0 when both values are 0
    
    x = 0;
    y = 0;
    printf("| %d | %d |%5d    |%5d   |%4d   |)\n", x, y, x && y, x || y, !x);
    printf("------------------------------------\n");
    x = 1;
    y = 0;
    printf("| %d | %d |%5d    |%5d   |%4d   |)\n", x, y, x && y, x || y, !x);
    printf("------------------------------------\n");
    x = 1;
    y = 1;
    printf("| %d | %d |%5d    |%5d   |%4d   |)\n", x, y, x && y, x || y, !x);
    printf("------------------------------------\n\n");
    
    return EXIT_SUCCESS;
}
