/**
 ******************************************************************************
 * @file           : p1.c
 * @author         : Mohamed Kadry
 * @date           : 23/4/2025
 * @brief          : Pointer Types
 ******************************************************************************
 */

 #include <stdio.h>
 #include <stdlib.h>
 
 struct S {
     int a;
     char b;
 };
 
 int add(int x, int y) { return x + y; }
 
 int main()
 {
     /* 1. Basic Data Pointer */
     int a = 10;
     int *p1 = &a;
     printf("1. Basic Pointer:\n");
     printf("a = %d, *p1 = %d\n\n", a, *p1);
     
     
     /* 2. Array Pointer */
     int arr[3] = {1, 2, 3};
     int *p2 = arr;
     printf("2. Array Pointer:\n");
     printf("arr[1] = %d\n\n", *(p2 + 1));
 
     /* 3. Structure Pointer */
     struct S s = {5, 'X'};
     struct S *p3 = &s;
     printf("3. Structure Pointer:\n");
     printf("s.a = %d, s.b = %c\n\n", p3->a, p3->b);
 
     /* 4. Function Pointer */
     int (*p4)(int, int) = add;
     printf("4. Function Pointer:\n");
     printf("add(3,4) = %d\n\n", p4(3, 4));
 
     /* 5. Pointer to Pointer */
     int **p5 = &p1;
     printf("5. Pointer to Pointer:\n");
     printf("**p5 = %d\n\n", **p5);
 
     /* 6. Void Pointer */
     void *p6 = &a;
     printf("6. Void Pointer:\n");
     printf("*(int*)p6 = %d\n\n", *(int*)p6);
 
     /* 7. Null Pointer */
     int *p7 = NULL;
     printf("7. Null Pointer:\n");
     printf("p7 = %p\n\n", (void*)p7);
 
     /* 8. Dynamic Memory Pointer */
     int *p8 = (int*)malloc(sizeof(int));
     *p8 = 100;
     printf("8. Dynamic Memory Pointer:\n");
     printf("*p8 = %d\n", *p8);
     free(p8);
 
     /* 9. Pointer to Constant */
     const int *p9 = &a;
     printf("\n9. Pointer to Constant:\n");
     printf("*p9 = %d (value can't be changed)\n\n", *p9);
 
     /* 10. Constant Pointer */
     int * const p10 = &a;
     printf("10. Constant Pointer:\n");
     printf("*p10 = %d (pointer can't be reassigned)\n\n", *p10);
 
     /* 11. Array of Pointers */
     char *p11[3] = {"A", "B", "C"};
     printf("11. Array of Pointers:\n");
     printf("p11[1] = %s\n\n", p11[1]);
 
     /* 12. Pointer to Array */
     int (*p12)[3] = &arr;
     printf("12. Pointer to Array:\n");
     printf("(*p12)[2] = %d\n\n", (*p12)[2]);
 
     return 0;
 }