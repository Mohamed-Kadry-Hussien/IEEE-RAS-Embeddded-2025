#include <stdio.h>

struct student
{
    unsigned int roll_number : 4 ; // 4 bit (0 -> 15)
    unsigned int age : 8 ; // 8 bit (0 -> 255)
    unsigned int marks : 3 ; // 3 bit (0 -> 7)
    char address[50];
    char name[30];
};

void print_student(struct student students[],int count)
{
    for(int i =0 ;i<count;i++)
    {
    printf("--------------------------------\n");
    printf("----------student(%d)-----------\n",i+1);
    printf("--------------------------------\n");
    printf("name of student (%d): %s\n",i+1,students[i].name);
    printf("age : %u\n",students[i].age);
    printf("Address: %s\n", students[i].address);
    printf("roll number : %u\n",students[i].roll_number);
    printf("Marks: %u\n", students[i].marks);
    }
}


int main()
{
    struct student std [5] =
    {
        {1, 20, 5, "123 St", "ahmed"},
        {2, 21, 6, "456 st", "rowan"},
        {3, 19, 4, "789 st", "wael"},
        {4, 22, 7, "321 St", "malak"},
        {5, 20, 5, "654 st", "mohamed"}
    };
    print_student(std , 5);
    printf("--------------------------------\n");
    printf("Size of struct student: %u bytes\n", sizeof(struct student));
    printf("--------------------------------\n");
}