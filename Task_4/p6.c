#include <stdio.h>

int main() {
    // Declare and initialize an integer variable 'a' with value 7
    int a = 7;
    
    // Declare a pointer 'aPtr' and make it point to 'a' by storing its address
    int *aPtr = &a;  

    // Both will be identical since 'aPtr' contains the address of 'a'
    printf("Address of a is %p\nValue of aPtr is %p\n\n", &a, aPtr);
    // %p is the format specifier for printing memory addresses in hexadecimal

    // Both will be 7 because 'aPtr' points to 'a'
    printf("Value of a is %d\nValue of *aPtr is %d\n\n", a, *aPtr);
    // '*' is the dereference operator - it gets the value at the stored address

    printf("Showing that * and & are complements of each other\n");
    
    // &*aPtr means "address of what aPtr points to" - same as original aPtr value
    // *&aPtr means "value at the address of aPtr" - same as original aPtr
    printf("&*aPtr = %p\n*&aPtr = %p\n", &*aPtr, *&aPtr);
    // These operations cancel each other out, showing pointer/address equivalence

    return 0;
}