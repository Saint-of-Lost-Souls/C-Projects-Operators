#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    // size of 'something' in bytes
    // known in compile time
    // result is an integer constant
    // 'something' can be a variable, basic or a derived data type, an expression

    printf("\n\n");
    
    int variable = 0;

    printf("%llu\n", sizeof(variable));
    printf("%llu\n", sizeof(int));
    printf("%llu\n", sizeof(long int));
    printf("%llu\n", sizeof(long long int));
    printf("%llu\n", sizeof(char));
    printf("%llu\n", sizeof(int16_t));
    printf("%llu\n", sizeof(int32_t));
    printf("%llu\n", sizeof(int64_t));
    printf("%llu\n", sizeof(123 && 456));
    printf("%llu\n", sizeof(123LL && 456LL));
    printf("%llu\n", sizeof("Shade"));
    printf("%llu\n", sizeof("Lee"));
    printf("%llu\n", sizeof("Onyx"));


    printf("\n\n");
    return EXIT_SUCCESS;
}
