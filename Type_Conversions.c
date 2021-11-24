#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\n");
    // Cast operator
    // int int_number = (int) char_number; converting char into int
    // char char_number = (char) int_number; converting int into char

    printf("Integer Promotion heirarchy:\n");
    printf("int --> unsigned int --> long int -->\nunsigned long int --> long long int -->\nunsigned long long int -->float --> double -->\nlong double\n\n");

    /*     char a =100, b = 5, c = 10; // Maximum value of char is 127
    char d = (a * b) / c; // a * b = 500 = char is promoted to int
    printf("d = %d\n", d); // d = 50, result is char */

    /*     char a = 0xFF; // -1
    unsigned char b = 0xFF; // 255
    printf("a == b --> %d", a == b); // same char value, but when promoted to int, they are -1, 255 */
    /* 
    short int a = 123;
    long int b;
    b = a; // implicit conversion
    printf("a: %d\n", a);
    printf("b: %ld\n", b); */

    int a = 1;
    long int b = 2;
    double c = 3.3;
    b = b + a; // implicit conversion: a is converted to long int
    c = c * b; // implicit conversion: b is converted to double

    printf("\n\n");
    return EXIT_SUCCESS;
}
