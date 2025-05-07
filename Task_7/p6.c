#include <stdio.h>

typedef union {
    int a;      // integer member
    float b;    // float member
    char c;     // character member
} DataUnion;

void print_union(DataUnion du) {
    printf("Integer (a): %d\n", du.a);
    printf("Float (b): %f\n", du.b);
    printf("Character (c): %c (ASCII %d)\n\n", du.c, du.c);
}

int main() {
    DataUnion du;
    
    printf("Size of union: %u bytes\n\n", sizeof(DataUnion));  //size of largest member
    
    printf("a = 98 :\n");
    du.a = 98;
    print_union(du);
    
    printf("b = 4.54 :\n");
    du.b = 4.54f;
    print_union(du);
    
    printf(" c = 'g' :\n");
    du.c = 'g';
    print_union(du);
    
    return 0;
}