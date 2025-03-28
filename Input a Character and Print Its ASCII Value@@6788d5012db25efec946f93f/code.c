#include <stdio.h>

int main() {
    char character;  // Variable to store the single character
    scanf("%c", &character);  // Taking input for a single character

    printf("The ASCII value of '%c' is: %d\n", character, character);  // Printing ASCII value
    return 0;
}
