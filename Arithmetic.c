#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("\n\n");
    printf("Enter A operand (int): ");
    scanf("%d", &a); // scan for the integer, then put it in 'a'
    
    printf("Enter B operand (int): ");
    scanf("%d", &b);
    printf("\n\n");

    /* c = a + b;
    printf("c = a + b = %d\n", c);

    c = a - b;
    printf("c = a - b = %d\n", c);

    c = a * b;
    printf("c = a * b = %d\n", c);

    c = a / b;
    printf("c = a / b = %d\n", c); */

    c = a % b;
    printf("c = a %% b = %d\n\n", c);

    /* float a, b, c;
    printf("\n\n");
    printf("Enter A operand: ");
    scanf("%f", &a); // scan for the float, then put it in 'a'
    
    printf("Enter B operand: ");
    scanf("%f", &b);
    printf("\n\n");

    c = a + b;
    printf("c = a + b = %9.3f\n", c);

    c = a - b;
    printf("c = a - b = %9.3f\n", c);

    c = a * b;
    printf("c = a * b = %9.3f\n", c);

    c = a / b;
    printf("c = a / b = %09.3f\n", c);
 */
    return EXIT_SUCCESS;
}
