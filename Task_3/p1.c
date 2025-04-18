/**
 ******************************************************************************
 * @file           : p1.c
 * @author         : Mohamed Kadry
 * @date           : 18/4/2025
 * @brief          : searching
 * @description    : Given a number N and an array A of N numbers. Determine if the number X exists in array A 
 *                   or not and print its position (0-index).
 ******************************************************************************
 */

 #include <stdio.h>
 int find_element(int arr[],int size,int number);
 int main()
  {
     int size,number;
     scanf("%d",&size);
     int arr[size] ;
     for(int i=0 ;i<size;i++)
     {
         scanf("%d",&arr[i]);
     }
     scanf("%d",&number);
     int x = find_element(arr,size,number);
     printf("%d",x);

  }
    int find_element(int arr[],int size,int number)
    {

        for(int i=0 ;i<size ;i++)
        {
            if(number==arr[i])
            {
               return i ;
            }
        }
        return -1 ;
      
    }

  