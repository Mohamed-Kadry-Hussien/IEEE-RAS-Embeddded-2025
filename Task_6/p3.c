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

struct Pet createPet(const char* name, int age, const char* kind, 
                    const char* food, const char* ownerName) {
    struct Pet newPet;
    
    strcpy(newPet.name, name);
    newPet.age = age;
    strcpy(newPet.kind, kind);
    strcpy(newPet.food, food);
    strcpy(newPet.ownerName, ownerName);
    
    return newPet;
}

void printPet(const struct Pet* pet) {
    printf("\n--- Pet Information ---\n");
    printf("Name: %s\n", pet->name);
    printf("Age: %d\n", pet->age);
    printf("Kind: %s\n", pet->kind);
    printf("Food: %s\n", pet->food);
    printf("Owner: %s\n", pet->ownerName);
}

int main() {
    struct Pet myDog = createPet("Buddy", 3, "Dog", "chicken", "retal");
    
    struct Pet myCat = createPet("Whiskers", 2, "Cat", "Fish", "rowan");
    
    printPet(&myDog);
    printPet(&myCat);
    
    return 0;
}