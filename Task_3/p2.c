/**
 ******************************************************************************
 * @file           : p2.c
 * @author         : Mohamed Kadry
 * @date           : 18/4/2025
 * @brief          : lowest number
 * @description    : Given a number N and an array A of N numbers. Print the lowest number and its position
 ******************************************************************************
 */

 #include <stdio.h>
 int  lowest_number(int arr[],int size);
 int main()
  {
     int size,x,y;
     scanf("%d",&size);
     int arr[size] ;
     for(int i=0 ;i<size;i++)
     {
         scanf("%d",&arr[i]);
     }
     x =  lowest_number(arr,size);
     for(int i =0 ; i<size ;i++)
     {
        if(x== arr[i])
        {
        y = i ;
        break;
        }
     }
     printf("%d %d",x,y+1);

  }
    int  lowest_number(int arr[],int size)
    {
      int min = arr[0];
      for(int i=0 ;i<size ;i++)
      {
        if(min>arr[i])
        {
            min = arr[i];
        }
      }
      return min ;
      
    }

  