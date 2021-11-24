#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\n");

// 0b1111 = 15 = (2^4) - 1 (4 is the number of bits in the bitmask)
    // 0b0111 = 7  = (2^3) - 1 (3 is the number of bits in the bitmask)
    // 0b0011 = 2  = (2^2) - 1 (2 is the number of bits in the bitmask)
    // 0b0001 = 1  = (2^1) - 1 (1 is the number of bits in the bitmask)

    // W: width of the bitmask in bits
        // Bitmask = 2^W - 1

        // [0:1] ---> W = 2 bits
        // [0:2] ---> W = 3 bits
        // [N:M] ---> W = M - N + 1
        // Shifting a number to the left is the same as multiplying it by 2 for each shift step

    // 2^W = 1 << W
    // Bitmask = 2^W - 1 = (1 << W) - 1

    printf("\n\n");
    return EXIT_SUCCESS;
}
