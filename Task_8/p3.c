#include <stdio.h>
#include <stdlib.h>

int main() {
    int* mallocPtr = (int*)malloc(5 * sizeof(int));
    if (!mallocPtr) {
        printf("Malloc allocation failed!\n");
        return 1;
    }
    printf("Malloc allocation successful!\n");

    for (int i = 0; i < 5; i++) {
        mallocPtr[i] = i * 10;
    }

    int* callocPtr = (int*)calloc(3, sizeof(int));
    if (!callocPtr) {
        printf("Calloc allocation failed!\n");
        free(mallocPtr);
        return 1;
    }
    printf("Calloc allocation successful!\n");

    for (int i = 0; i < 3; i++) {
        callocPtr[i] = i * 5;
    }

    int* reallocPtr = (int*)realloc(mallocPtr, 10 * sizeof(int));
    if (!reallocPtr) {
        printf("Realloc failed!\n");
        free(mallocPtr);
        free(callocPtr);
        return 1;
    }
    printf("Realloc successful!\n");
    mallocPtr = reallocPtr;

    printf("Malloc values (after realloc): ");
    for (int i = 0; i < 5; i++) { // Only printing original 5 values
        printf("%d ", mallocPtr[i]);
    }
    printf("\n");

    printf("Calloc values: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", callocPtr[i]);
    }
    printf("\n");

    // Free memory
    free(mallocPtr);
    free(callocPtr);

    return 0;
}
