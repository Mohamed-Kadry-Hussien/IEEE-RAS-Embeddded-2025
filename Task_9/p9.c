#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    char items[MAX_SIZE];
    int front;
    int rear;
} Queue;

void initializeQueue(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

int isFull(Queue *q) {
    return (q->rear == MAX_SIZE - 1);
}

int isEmpty(Queue *q) {
    return (q->front == -1 || q->front > q->rear);
}

void enqueue(Queue *q, char value) {
    if (isFull(q)) {
        printf("Queue Overflow\n");
        return;
    }
    if (q->front == -1) {
        q->front = 0;
    }
    q->items[++q->rear] = value;
}

char dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue Underflow\n");
        exit(1);
    }
    return q->items[q->front++];
}

void printQueue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue (front to rear): ");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%c ", q->items[i]);
    }
    printf("\n");
}

int main() {
    Queue q;
    initializeQueue(&q);
    
    enqueue(&q, 'A');
    enqueue(&q, 'B');
    enqueue(&q, 'C');
    
    printf("Queue after enqueues:\n");
    printQueue(&q);
    
    char dequeued = dequeue(&q);
    printf("\nDequeued value: %c\n", dequeued);
    printf("Value printed is: A\n");
    
    printf("\nQueue after dequeue:\n");
    printQueue(&q);
    
    return 0;
}