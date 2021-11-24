#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    a = 0;
    b = a++ * 2 + 1; // 'a' is increased incrementally AFTER the operation

    printf("After post-increment:\n");
    printf("a: %d\n", a);
    printf("b: %d\n\n", b);

    a = 0;
    b = ++a * 2 + 1;

    printf("After pre-increment:\n");
    printf("a: %d\n", a);
    printf("b: %d\n\n", b);

/*     float a, b;
    a = 3.14;
    b = a++; // returning the value before the incrementation

    printf("After post-increment:\n");
    printf("a: %.2f\n", a);
    printf("b: %.2f\n\n", b);

    a = 3.14;
    b = ++a; // incrementing a before b reads it

    printf("After pre-increment:\n");
    printf("a: %.2f\n", a);
    printf("b: %.2f\n\n", b); */

    return EXIT_SUCCESS;
}
