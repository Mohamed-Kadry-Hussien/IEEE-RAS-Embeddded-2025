#include <stdio.h>
#include <stdlib.h>


typedef struct DNode {
    int data;
    struct DNode* prev;
    struct DNode* next;
} DNode;


DNode* createDNode(int data) {
    DNode* newNode = (DNode*)malloc(sizeof(DNode));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}


void insertAtBeginningDLL(DNode** head, int data) {
    DNode* newNode = createDNode(data);
    
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    
    newNode->next = *head;
    (*head)->prev = newNode;
    *head = newNode;
}

void printDLL(DNode* head) {
    DNode* current = head;
    printf("Doubly Linked List (forward): ");
    while (current != NULL) {
        printf("%d <-> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
    

    if (head != NULL) {
        current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        
        printf("Doubly Linked List (backward): ");
        while (current != NULL) {
            printf("%d <-> ", current->data);
            current = current->prev;
        }
        printf("NULL\n");
    }
}

void freeDLL(DNode** head) {
    DNode* current = *head;
    DNode* next;
    
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    
    *head = NULL;
    printf("Doubly linked list freed from memory\n");
}

int main() {
    DNode* head = NULL;
    
    insertAtBeginningDLL(&head, 30);
    insertAtBeginningDLL(&head, 20);
    insertAtBeginningDLL(&head, 10);
    
    printf("Doubly linked list after inserts:\n");
    printDLL(head);
    
    freeDLL(&head);
    
    return 0;
}