#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int items[MAX_SIZE];
    int top;
} Stack;

void initializeStack(Stack *s) {
    s->top = -1;
}

int isFull(Stack *s) {
    return s->top == MAX_SIZE - 1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow\n");
        return;
    }
    s->items[++s->top] = value;
}

int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return s->items[s->top--];
}

void printStack(Stack *s) {
    printf("Stack (top to bottom): ");
    for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->items[i]);
    }
    printf("\n");
}

int main() {
    Stack s;
    initializeStack(&s);
    
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    
    printf("Stack after pushes:\n");
    printStack(&s);
    
    int popped = pop(&s);
    printf("\nPopped value: %d\n", popped);
    printf("Value printed is: 30\n");
    
    printf("\nStack after pop:\n");
    printStack(&s);
    
    return 0;
}