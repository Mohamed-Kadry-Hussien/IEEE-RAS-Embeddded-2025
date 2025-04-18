/**
 ******************************************************************************
 * @file           : p7.c
 * @author         : Mohamed Kadry
 * @date           : 18/4/2025
 * @brief          : Mirror Array
 * @description    : Given a 2D array, reverse each row to simulate the mirror effect.
 ******************************************************************************
 */

 #include <stdio.h>

 int main()
 {
     int N, M;
     scanf("%d %d", &N, &M);
 
     int arr[100][100];
 
     for (int i = 0; i < N; i++)
     {
         for (int j = 0; j < M; j++)
         {
             scanf("%d", &arr[i][j]);
         }
     }
 
     for (int i = 0; i < N; i++)
     {
         for (int j = 0; j < M / 2; j++)
         {
             int temp = arr[i][j];
             arr[i][j] = arr[i][M - j - 1];
             arr[i][M - j - 1] = temp;
         }
     }
 
     for (int i = 0; i < N; i++)
     {
         for (int j = 0; j < M; j++)
         {
             printf("%d ", arr[i][j]);
         }
         printf("\n");
     }
 
     return 0;
 }
 