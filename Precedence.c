#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\n");

    printf("-----------------------------Precedence Table------------------------|\n");
    printf("----CATERGORY---|----------------OPERATOR------------|-ASSOCIATIVITY-|\n"); 
    printf("---------------------------------------------------------------------|\n");
    printf("    Postfix     |           () {} -> . ++ --         | Left to right |\n");
    printf("---------------------------------------------------------------------|\n");
    printf("      Unary     |   + - ! ~ ++ -- (type) & * sizeof  | Right to left |\n");
    printf("---------------------------------------------------------------------|\n");
    printf(" Multiplicative |                 * / %%             | Left to right |\n");
    printf("---------------------------------------------------------------------|\n");
    printf("    Additive    |                  + -               | Left to right |\n");
    printf("---------------------------------------------------------------------|\n");
    printf("     Shift      |                 << >>              | Left to right |\n");
    printf("---------------------------------------------------------------------|\n");
    printf("   Relational   |               < <= > >=            | Left to right |\n");
    printf("---------------------------------------------------------------------|\n");
    printf("    Equality    |                 == !=              | Left to right |\n");
    printf("---------------------------------------------------------------------|\n");
    printf("   Bitwise AND  |                   &                | Left to right |\n");
    printf("---------------------------------------------------------------------|\n");
    printf("   Bitwise XOR  |                   ^                | Left to right |\n");
    printf("---------------------------------------------------------------------|\n");
    printf("    Bitwise OR  |                   |                | Left to right |\n");
    printf("---------------------------------------------------------------------|\n");
    printf("   Logical AND  |                  &&                | Left to right |\n");
    printf("---------------------------------------------------------------------|\n");
    printf("    Logical OR  |                  ||                | Left to right |\n");
    printf("---------------------------------------------------------------------|\n");
    printf("   Conditional  |                  ?:                | Right to left |\n");
    printf("---------------------------------------------------- ----------------|\n");
    printf("    Assignment  | = += -= *= /= %%= >>= <<= &= ^= |= | Right to left |\n");
    printf("---------------------------------------------------------------------|\n");
    printf("      Comma     |                  ,                 | Left to right |\n");
    printf("---------------------------------------------------------------------|\n\n");

    printf("Examples");
    printf("int result = a > b && b != 123");
    printf("1. a > b, 2. b 1= 123, 3. &&");
    printf("\n\n");
    return EXIT_SUCCESS;
}
