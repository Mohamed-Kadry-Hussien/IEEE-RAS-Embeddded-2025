#include <stdio.h>
#include "PLATFORM_TYPES_H.h"

int main() {
    printf("=== Platform Types Definitions ===\n\n");
    
    printf("--- Standard Integer Types ---\n");
    printf("Size of int8_t: %u bytes\n", sizeof(int8_t));
    printf("Size of uint8_t: %u bytes\n", sizeof(uint8_t));
    printf("Size of int16_t: %u bytes\n", sizeof(int16_t));
    printf("Size of uint16_t: %u bytes\n", sizeof(uint16_t));
    printf("Size of int32_t: %u bytes\n", sizeof(int32_t));
    printf("Size of uint32_t: %u bytes\n", sizeof(uint32_t));
    printf("Size of int64_t: %u bytes\n", sizeof(int64_t));
    printf("Size of uint64_t: %u bytes\n", sizeof(uint64_t));
    
    printf("\n--- Floating Point Types ---\n");
    printf("Size of float32_t: %u bytes\n", sizeof(float32_t));
    printf("Size of float64_t: %u bytes\n", sizeof(float64_t));
    
    printf("\n--- Boolean Type ---\n");
    printf("Size of boolean: %u bytes\n", sizeof(boolean));
    printf("TRUE = %d, FALSE = %d\n", TRUE, FALSE);
    
    printf("\n--- Volatile Integer Types ---\n");
    printf("Size of vint8_t: %u bytes\n", sizeof(vint8_t));
    printf("Size of vuint8_t: %u bytes\n", sizeof(vuint8_t));
    printf("Size of vint16_t: %u bytes\n", sizeof(vint16_t));
    printf("Size of vuint16_t: %u bytes\n", sizeof(vuint16_t));
    printf("Size of vint32_t: %u bytes\n", sizeof(vint32_t));
    printf("Size of vuint32_t: %u bytes\n", sizeof(vuint32_t));
    printf("Size of vint64_t: %u bytes\n", sizeof(vint64_t));
    printf("Size of vuint64_t: %u bytes\n", sizeof(vuint64_t));
    
    printf("\n--- Volatile Floating Point Types ---\n");
    printf("Size of vfloat32: %u bytes\n", sizeof(vfloat32));
    printf("Size of vfloat64: %u bytes\n", sizeof(vfloat64));
    
    printf("\n--- Volatile Boolean Type ---\n");
    printf("Size of vboolean: %u bytes\n", sizeof(vboolean));
    
    printf("\n--- Pointer Types ---\n");
    printf("Size of vptr: %u bytes\n", sizeof(vptr));
    printf("Size of vconst: %u bytes\n", sizeof(vconst));
    
    
    return 0;
}