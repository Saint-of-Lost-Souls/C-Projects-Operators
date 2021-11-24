#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\n");

    printf("Setting the Nth Bit: result = data | (1 << N");
    printf("Clearing the Nth Bit: result = data & 1(1 << N");
    // Setting the Nth Bit 
        // Set bit to 6
            // mask = (1 << 6)
                // result = data | (1 << 6)
    // data =   10101010
    // |
    // mask =   01000000
    // =
    // result = 11101010 : added the bit at index 6
    
    // Clearing the Nth Bit
        // Clear bit [5]
            // result = data & ~(1 << 5) complement opertaion occurs after the position has shifted
    // data =   10101010
    // &
    // mask =   11011111
    // =
    // result = 10001010 : cleared the bit at index 5
    
    // Selecting Bits
        // select bits [3:5]
            // result = (data >> 3) & 0b111
    // data =   11101001
    // >> 3 =   00011101
    // & =      00000111 
    // result = 00000101


    return EXIT_SUCCESS;
}
