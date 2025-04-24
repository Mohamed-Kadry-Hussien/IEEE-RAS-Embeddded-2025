/**
 ******************************************************************************
 * @file           : p2.c
 * @author         : Mohamed Kadry
 * @date           : 23/4/2025
 * @brief          : Arithmetic Operations Using Pointers
 * @description    : Reads two numbers and performs addition, subtraction,
 *                   multiplication, and division using pointers.
 ******************************************************************************
 */
#include <stdio.h>

int main ()
{
    int a , b ,sum , difference , product , quotient ;
    int * ptr_a , * ptr_b ;
    ptr_a = &a ;
    ptr_b = &b ;
    
    printf("input:");
    printf("\nnum1 = ");
    scanf("%d",ptr_a);
    printf("\nnum2 = ");
    scanf("%d",ptr_b);
    sum = *ptr_a + *ptr_b ;
    difference = *ptr_a - *ptr_b ;
    product = *ptr_a * *ptr_b ;
    quotient = *ptr_a / *ptr_b ;
    printf("output:");
    printf("\nsum=%d",sum);
    printf("\ndifference=%d",difference);
    printf("\nproduct=%d",product);
    printf("\nquotient=%d",quotient);


   
}