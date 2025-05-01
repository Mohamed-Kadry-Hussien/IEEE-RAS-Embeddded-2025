#include <stdio.h>
#include <stdlib.h>

struct Pet {
    char name[20];  
    int age;
    char kind[20];
};

void freePet(struct Pet* pet) {
    if (pet != NULL) {
        free(pet);  
        printf("Pet memory freed!\n");
    }
}

int main() {
    struct Pet* myPet = (struct Pet*)malloc(sizeof(struct Pet));
    
    strcpy(myPet->name, "rox");
    myPet->age = 1;
    strcpy(myPet->kind, "Dog");
    
    printf("Pet: %s is a %d year old %s\n", myPet->name, myPet->age, myPet->kind);
    
    freePet(myPet);
    
    return 0;
}