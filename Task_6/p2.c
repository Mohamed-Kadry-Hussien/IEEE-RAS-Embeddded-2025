#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Pet {
    char name[20];
    int age;
    char kind[20];
    char food[20];
    char ownerName[20];
};

void init_struct(struct Pet *pet, char *name, int age, char* kind, char *food, char *ownerName) {
    strcpy(pet->name, name);
    pet->age = age;  
    strcpy(pet->kind, kind);
    strcpy(pet->food, food);
    strcpy(pet->ownerName, ownerName);
}  

void printPet(struct Pet *pet) {
    printf("--- Pet Information ---\n");
    printf("Name: %s\n", pet->name);
    printf("Age: %d\n", pet->age);
    printf("Kind: %s\n", pet->kind);
    printf("Food: %s\n", pet->food);
    printf("Owner: %s\n\n", pet->ownerName);
}

int main() 
{
    struct Pet pet;
    init_struct(&pet, "max", 1, "dog", "chicken", "ahmed");
    printPet(&pet);
    printf("\n");


    struct Pet *cat = (struct Pet *)malloc(sizeof(struct Pet));
    if(cat!=NULL)
    {
        init_struct(cat, "marvel", 1, "cat", "milk", "mohamed");
        printPet(cat);
        free(cat);
    }

    return 0;
}