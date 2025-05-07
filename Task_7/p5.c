#include <stdio.h>

typedef enum {
    add = '+',   // ASCII 43
    sub = '-',   // ASCII 45
    multiply = '*',  // ASCII 42
    divide = '/',    // ASCII 47
    and = '&',       // ASCII 38
    or = '|',        // ASCII 124
    not = '!'        // ASCII 33
} operation;

float calculator(float op1, float op2, operation op) {
    float result;
    switch(op) {
        case add:
            result = op1 + op2;
            break;
        case sub:
            result = op1 - op2;
            break;
        case multiply:
            result = op1 * op2;
            break;
        case divide:
            if(op2 == 0) {
                printf("Division by zero!\n");
                return 0;
            }
            result = op1 / op2;
            break;
        case and:
            result = (int)op1 & (int)op2;
            break;
        case or:
            result = (int)op1 | (int)op2;
            break;
        case not:
            result = !(int)op1;
            break;
        default:
            printf("Invalid operation\n");
            return 0;
    }
    return result;
}

void init_op(float *op1, float *op2, operation *op) {
    char op_char;
    printf("Enter the first operand: ");
    scanf("%f", op1);
    printf("Enter the second operand: ");
    scanf("%f", op2);
    printf("Enter the operation (+, -, *, /, &, |, !): ");
    scanf(" %c", &op_char);  
    *op = (operation)op_char;
}

int main() {
    float op1, op2;
    operation op;
    init_op(&op1, &op2, &op);
    float result = calculator(op1, op2, op);
    
    printf("The result of (%.2f %c %.2f) is %.2f\n", op1, (char)op, op2, result);
    printf("Size of operation enum: %u bytes\n", sizeof(operation));
    
    return 0;    

}