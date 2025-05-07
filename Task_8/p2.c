#include <stdio.h>

#define ADDITION

#ifdef ADDITION
#define OPERATION(a, b) (a + b)
#else
#define OPERATION(a, b) (a - b)
#endif

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    int result = OPERATION(x, y);

    #ifdef ADDITION
    printf("Addition result: %d\n", result);
    #else
    printf("Subtraction result: %d\n", result);
    #endif

    return 0;
}
