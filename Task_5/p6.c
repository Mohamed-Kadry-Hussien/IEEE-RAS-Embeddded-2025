/**
 ******************************************************************************
 * @file           : pointer_calculator_continuous.c
 * @author         : Mohamed Kadry
 * @date           : 23/4/2025
 * @brief          : Continuous Function Pointer Calculator
 * @description    : Calculator that runs continuously using function pointers
 ******************************************************************************
 */

 #include <stdio.h>

 float add(float a, float b) { return a + b; }
 float sub(float a, float b) { return a - b; }
 float mul(float a, float b) { return a * b; }
 float div(float a, float b) { return a / b; }
 
 int main() 
 {
     int choice;
     float x, y;
     float (*op)(float, float) = NULL;
     
     float (*operations[])(float, float) = {add, sub, mul, div};
     const char *menu[] = {"Add", "Subtract", "Multiply", "Divide", "Exit"};
 
     while(1) {
         printf("\nSelect an operation:\n");
         for (const char **p = menu; p < menu + 5; p++) {
             printf("%ld. %s\n", p - menu + 1, *p);
         }
         
         printf("Enter your choice (1-5): ");
         scanf("%d", &choice);
         
         if(choice == 5) break;
         
         printf("Enter two numbers: ");
         scanf("%f %f", &x, &y);
         
         if (choice >= 1 && choice <= 4) {
             op = *(operations + choice - 1);
             printf("Result: %.2f\n", (*op)(x, y));
         } else {
             printf("Invalid choice! Please try again.\n");
         }
     }
     
     printf("Calculator exited.\n");
     return 0;
 }