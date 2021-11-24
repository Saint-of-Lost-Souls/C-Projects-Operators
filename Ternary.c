#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int main()
{
    printf("\n");

    int a = 9;
    int b = 3;
    int c = a > b ? a : b; // condition ? what is stored depending on the answer
    printf("c: %d\n", c);

    bool is_even = (a % 2 == 0) ? true : false; // depending on whether a is divisbile by 2 with no remainder, the answer will be true, false

    printf("\n\n");
    return EXIT_SUCCESS;
}
