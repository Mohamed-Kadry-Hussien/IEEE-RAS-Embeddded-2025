#include <stdio.h>

typedef struct {
    float real;
    float imaginary;
} Complex;

Complex add_complex(Complex num1, Complex num2) {
    Complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

int main() {
    Complex num1, num2, sum;
    
    printf("Enter first complex number (real imaginary): ");
    scanf("%f %f", &num1.real, &num1.imaginary);
    
    printf("Enter second complex number (real imaginary): ");
    scanf("%f %f", &num2.real, &num2.imaginary);
    
    sum = add_complex(num1, num2);
    
    printf("Sum = %.3f + %.3fi\n", sum.real, sum.imaginary);
    
    return 0;
}