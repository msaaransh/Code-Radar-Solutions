#include <stdio.h>

int main() {
    int number;  // Variable to store the integer

    
    scanf("%d", &number);  // Taking the integer input

    printf("Hexadecimal: %x\N", number);  // Printing the hexadecimal representation
    printf("Octal: %o\n", number);        // Printing the octal representation

    return 0;
}

