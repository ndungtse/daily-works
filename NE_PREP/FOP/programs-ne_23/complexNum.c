#include <stdio.h>

// Define a structure for complex numbers
struct Complex {
    float real;
    float imaginary;
};

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex sum;
    sum.real = c1.real + c2.real;
    sum.imaginary = c1.imaginary + c2.imaginary;
    return sum;
}

int main() {
    struct Complex first, second, sum;

    // Accept the first complex number from the user
    printf("Enter the real and imaginary part of the first complex number: ");
    scanf("%f %f", &first.real, &first.imaginary);

    // Accept the second complex number from the user
    printf("Enter the real and imaginary part of the second complex number: ");
    scanf("%f %f", &second.real, &second.imaginary);

    // Add the two complex numbers
    sum = addComplex(first, second);

    // Display the result
    printf("Sum of the complex numbers: %.2f + %.2fi\n", sum.real, sum.imaginary);

    return 0;
}
