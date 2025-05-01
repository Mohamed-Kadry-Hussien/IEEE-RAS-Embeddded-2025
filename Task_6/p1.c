#include <stdio.h>

struct Pet 
    {
           char name[20];
           int age ;
           char kind[20];
           char food[20];
           char ownerName[20];
    };

struct Employee 
    {
        char name[50];
        float salary;
        int id;
        char jobTitle[50];
    };

void printPet(struct Pet pet) {
    printf("--- Pet Information ---\n");
    printf("Name: %s\n", pet.name);
    printf("Age: %d\n", pet.age);
    printf("Kind: %s\n", pet.kind);
    printf("Food: %s\n", pet.food);
    printf("Owner: %s\n\n", pet.ownerName);
}

// Function to print Employee details
void printEmployee(struct Employee emp) {
    printf("--- Employee Information ---\n");
    printf("Name: %s\n", emp.name);
    printf("Salary: $%.2f\n", emp.salary);
    printf("ID: %d\n", emp.id);
    printf("Job Title: %s\n\n", emp.jobTitle);
}

int main()
{
    struct Pet pet ={"max",2,"dog","chicken","anwer"};
    struct Employee emp1 = {
        .name = "mohamed",
        .salary = 120000,
        .id = 300,
        .jobTitle = "Machine Learning Engineer"
    };
    printPet(pet);
    printEmployee(emp1);
    
    return 0;
}