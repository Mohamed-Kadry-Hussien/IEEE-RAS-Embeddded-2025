#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 5  

typedef struct {
    int items[MAX_SIZE];
    int front;
    int rear;
} Queue;

void initializeQueue(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

bool isEmpty(Queue *q) {
    return (q->front == -1 && q->rear == -1);
}

bool isFull(Queue *q) {
    return (q->rear == MAX_SIZE - 1);
}

int getFront(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty - no front value\n");
        return -1;  
    }
    return q->items[q->front];
}

int getRear(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty - no rear value\n");
        return -1;  
    }
    return q->items[q->rear];
}

void enqueue(Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue is full - cannot enqueue %d\n", value);
        return;
    }
    if (isEmpty(q)) {
        q->front = q->rear = 0;
    } else {
        q->rear++;
    }
    q->items[q->rear] = value;
    printf("Enqueued: %d\n", value);
}

int dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty - cannot dequeue\n");
        return -1;  
    }
    int value = q->items[q->front];
    if (q->front == q->rear) {
        q->front = q->rear = -1;
    } else {
        q->front++;
    }
    printf("Dequeued: %d\n", value);
    return value;
}

void printQueueStatus(Queue *q) {
    printf("\nQueue Status:\n");
    printf("Empty: %s\n", isEmpty(q) ? "Yes" : "No");
    printf("Full: %s\n", isFull(q) ? "Yes" : "No");
    
    if (!isEmpty(q)) {
        printf("Front value: %d\n", getFront(q));
        printf("Rear value: %d\n", getRear(q));
    }
    
    printf("Current queue: ");
    if (isEmpty(q)) {
        printf("Empty\n");
    } else {
        for (int i = q->front; i <= q->rear; i++) {
            printf("%d ", q->items[i]);
        }
        printf("\n");
    }
    printf("-----------------\n");
}

int main() {
    Queue q;
    initializeQueue(&q);
    
    printQueueStatus(&q);
    
    enqueue(&q, 10);
    printQueueStatus(&q);
    
    enqueue(&q, 20);
    printQueueStatus(&q);
    
    enqueue(&q, 30);
    printQueueStatus(&q);
    
    printf("\nFront value: %d\n", getFront(&q));
    printf("Rear value: %d\n", getRear(&q));
    
    dequeue(&q);
    printQueueStatus(&q);
    
    enqueue(&q, 40);
    printQueueStatus(&q);
    
    enqueue(&q, 50);
    printQueueStatus(&q);
    
    enqueue(&q, 60);  
    printQueueStatus(&q);
    
    dequeue(&q);
    printQueueStatus(&q);
    
    dequeue(&q);
    printQueueStatus(&q);
    
    dequeue(&q);
    printQueueStatus(&q);
    
    dequeue(&q); 
    printQueueStatus(&q);
    
    return 0;
}