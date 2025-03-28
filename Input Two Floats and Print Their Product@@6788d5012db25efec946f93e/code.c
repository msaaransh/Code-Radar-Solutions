#include <stdio.h>

int main() {
    float num1, num2, product;  // Variables to store the two numbers and their product

    scanf("%f", &num1);  // Taking the first floating-point input

    scanf("%f", &num2);  // Taking the second floating-point input

    product = num1 * num2;  // Calculating the product of the two numbers

    printf("Product:%.2f\n", product);  // Printing the result
    return 0;
}
