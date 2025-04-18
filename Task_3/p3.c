/**
 ******************************************************************************
 * @file           : p3.c
 * @author         : Mohamed Kadry
 * @date           : 18/4/2025
 * @brief          : Sorting
 * @description    : Given a number N and an array A of N numbers. 
 *                   Print the numbers after sorting them in ascending order 
 *                   using Selection Sort (no built-in functions).
 ******************************************************************************
 */

 #include <stdio.h>

 void selection_sort(int arr[], int size);
 // void bubble_sort(int arr[], int size); // to use bubble sort
 
 int main() {
     int size;
     scanf("%d", &size);
     int arr[size];
 
     for (int i = 0; i < size; i++) {
         scanf("%d", &arr[i]);
     }
 
     selection_sort(arr, size);
     // bubble_sort(arr, size); // to use Bubble Sort 
 
     for (int i = 0; i < size; i++) {
         printf("%d ", arr[i]);
     }
 }
 
 void selection_sort(int arr[], int size) {
     for (int i = 0; i < size - 1; i++) {
         int min_index = i;
         for (int j = i + 1; j < size; j++) {
             if (arr[j] < arr[min_index]) {
                 min_index = j;
             }
         }
         int temp = arr[i];
         arr[i] = arr[min_index];
         arr[min_index] = temp;
     }
 }
 
 /*
 // Bubble Sort Algorithm
 void bubble_sort(int arr[], int size) {
     for (int i = 0; i < size - 1; i++) {
         for (int j = 0; j < size - i - 1; j++) {
             if (arr[j] > arr[j + 1]) {
                 // swap arr[j] and arr[j+1]
                 int temp = arr[j];
                 arr[j] = arr[j + 1];
                 arr[j + 1] = temp;
             }
         }
     }
 }
 */
 