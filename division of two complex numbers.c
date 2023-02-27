#include <stdio.h>
struct complex {
    float real;
    float imag;
};
struct complex complex_division(struct complex num1, struct complex num2) {
    struct complex result;
    float denominator;

    denominator = num2.real * num2.real + num2.imag * num2.imag;
    result.real = (num1.real * num2.real + num1.imag * num2.imag) / denominator;
    result.imag = (num1.imag * num2.real - num1.real * num2.imag) / denominator;

    return result;
}

int main() {
    struct complex num1, num2, result;

    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);

    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    result = complex_division(num1, num2);

    printf("Result of division: %.2f + %.2fi\n", result.real, result.imag);

    return 0;
}
