#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\n");
    printf("|-----------Assignment Operators-------|\n");
    printf("|--------------------------------------|\n");
    printf("| OPERATOR |    SAME AS    |  EXAMPLE  |\n");
    printf("|--------------------------------------|\n");
    printf("|     +=   |   a = a + b   |   a += b  |\n");
    printf("|--------------------------------------|\n");
    printf("|     -=   |   a = a - b   |   a -= b  |\n");
    printf("|--------------------------------------|\n");
    printf("|     *=   |   a = a * b   |   a *= b  |\n");
    printf("|--------------------------------------|\n");
    printf("|     /=   |   a = a / b   |   a /= b  |\n");
    printf("|--------------------------------------|\n");
    printf("|     %%=   |   a = a %% b   |   a %%= b  |\n");
    printf("|--------------------------------------|\n\n");
    printf("|     &=   |   a = a & b   |   a &= b  |\n");
    printf("|--------------------------------------|\n");
    printf("|     |=   |   a = a & b   |   a |= b  |\n");
    printf("|--------------------------------------|\n");
    printf("|     ^=   |   a = a & b   |   a ^= b  |\n");
    printf("|--------------------------------------|\n");
    printf("|    >>=   |   a = a & b   |  a >>= b  |\n");
    printf("|--------------------------------------|\n");
    printf("|    <<=   |   a = a & b   |  a <<= b  |\n");
    printf("|--------------------------------------|\n");
    int a, b = 3;
    printf("b = %d\n", b);

    a = b;
    printf("a  =  b --> a  =  %d\n", a);
    a += b;
    printf("a +=  b --> a +=  %d\n", a);
    a -= b;
    printf("a -=  b --> a -=  %d\n", a); 
    a *= b;
    printf("a *=  b --> a *=  %d\n", a);
    a /= b;
    printf("a /=  b --> a /=  %d\n", a);
    a %= b;
    printf("a %%=  b --> a %%=  %d\n", a);
    a &= b;
    printf("a &=  b --> a &=  %d\n", a);
    a|= b;
    printf("a |=  b --> a |=  %d\n", a);
    a ^= b;
    printf("a ^=  b --> a ^=  %d\n", a);
    a >>= b;
    printf("a >>= b --> a >>= %d\n", a);
    a <<= b;    
    printf("a <<= b --> a <<= %d\n", a);
    printf("\n\n");

return EXIT_SUCCESS;
}
