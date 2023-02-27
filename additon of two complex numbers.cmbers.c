#include <stdio.h>

typedef struct {
    double real;
    double imaginary;
} complex;

complex add_complex(complex num1, complex num2) {
    complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

int main() {
    complex num1, num2, sum;
    
    printf("Enter the first complex number (real imaginary): ");
    scanf("%lf %lf", &num1.real, &num1.imaginary);
    
    printf("Enter the second complex number (real imaginary): ");
    scanf("%lf %lf", &num2.real, &num2.imaginary);
    
    sum = add_complex(num1, num2);
    
    printf("Sum = %.2lf + %.2lfi\n", sum.real, sum.imaginary);
    
    return 0;
}
