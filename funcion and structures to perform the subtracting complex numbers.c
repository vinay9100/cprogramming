#include <stdio.h>
typedef struct {
    double real;
    double imaginary;
} Complex;
Complex subtract(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imaginary = a.imaginary - b.imaginary;
    return result;
}
int main() {
    Complex num1, num2, difference;
    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%lf %lf", &num1.real, &num1.imaginary);
    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%lf %lf", &num2.real, &num2.imaginary);
    difference = subtract(num1, num2);
    printf("The difference is: %.2lf + %.2lf i\n", difference.real, difference.imaginary);

    return 0;
}
