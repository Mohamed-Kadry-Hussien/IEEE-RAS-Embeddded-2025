/**
 ******************************************************************************
 * @file           : swap_pointer.c
 * @author         : Mohamed Kadry
 * @date           : 23/4/2025
 * @brief          : Swap Two Numbers Using Pointers
 * @description    : Demonstrates swapping values using call by reference method
 ******************************************************************************
 */


#include <stdio.h>
int swap(int* a ,int* b);
int main()
{
    int x ;
    int y ;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    printf("before swap :\n");
    printf("x= %d \ny= %d",x,y);
    swap(&x,&y);
    printf("\nafter swap :\n");
    printf("x= %d \ny= %d",x,y);
}


int swap(int* a ,int* b)
{
    int temp = *a ;
    *a=*b;
    *b=temp;
}