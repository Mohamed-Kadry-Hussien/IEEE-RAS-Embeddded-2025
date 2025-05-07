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

    free(mallocPtr);
    printf("Freed malloc memory\n");

    int* bigPtr = (int*)malloc(100000 * sizeof(int));
    if (!bigPtr) {
        printf("Big allocation failed! Not enough memory.\n");
    } else {
        printf("Big allocation successful!\n");
        free(bigPtr);
    }

    printf("Calloc values: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", callocPtr[i]);
    }
    printf("\n");

    free(callocPtr);

    return 0;
}
