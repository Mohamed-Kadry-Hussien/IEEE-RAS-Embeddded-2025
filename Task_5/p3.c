/**
 ******************************************************************************
 * @file           : p3.c
 * @author         : Mohamed Kadry
 * @date           : 23/4/2025
 * @brief          : Array Sorting Using Pointers
 * @description    : Inputs array elements and sorts them in ascending and descending order using pointers
 ******************************************************************************
 */

 #include <stdio.h>

 void sort_ascending(int *arr, int size) {
     int *i, *j, temp;
     for (i = arr; i < arr + size - 1; i++) {
         for (j = i + 1; j < arr + size; j++) {
             if (*i > *j) {
                 temp = *i;
                 *i = *j;
                 *j = temp;
             }
         }
     }
 }
 
 void sort_descending(int *arr, int size) {
     int *i, *j, temp;
     for (i = arr; i < arr + size - 1; i++) {
         for (j = i + 1; j < arr + size; j++) {
             if (*i < *j) {
                 temp = *i;
                 *i = *j;
                 *j = temp;
             }
         }
     }
 }
 
 void print_array(int *arr, int size) {
     int *p;
     for (p = arr; p < arr + size; p++) {
         printf("%d", *p);
         if (p != arr + size - 1) printf(", ");
     }
     printf(",\n");
 }
 
 int main() {
     int arr[10];
     int size = 10;
     int *p = arr;
     
     printf("Array elements: ");
     for (int i = 0; i < size; i++) {
         scanf("%d", p++);
     }
     
     // Sort and print ascending order
     sort_ascending(arr, size);
     printf("Array in ascending order: ");
     print_array(arr, size);
     
     // Sort and print descending order
     sort_descending(arr, size);
     printf("Array in descending order: ");
     print_array(arr, size);
     
     return 0;
 }