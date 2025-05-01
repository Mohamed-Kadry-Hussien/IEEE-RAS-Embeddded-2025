#include <stdio.h>
#include <stddef.h> 

// Default padding
struct Pet {
    char type;      // 1 byte 
    int age;        // 4 bytes 
    char name[20];  // 20 bytes
    //  size with padding: 1 + 3 + 4 + 20 = 28 bytes
};

// without padding
#pragma pack(push, 1)  
struct PackedPet {
    char type;
    int age;
    char name[20];
    //  size: 1 + 4 + 20 = 25 bytes
};
#pragma pack(pop)      

int main() {
    printf("Size with padding: %d bytes\n", sizeof(struct Pet));
    printf("Size without padding: %d bytes\n", sizeof(struct PackedPet));
    
    printf("\nMember offsets (shows padding):\n");
    printf("type offset: %d\n", offsetof(struct Pet, type));
    printf("age offset: %d\n", offsetof(struct Pet, age));  
    printf("name offset: %d\n", offsetof(struct Pet, name));

    return 0;
}