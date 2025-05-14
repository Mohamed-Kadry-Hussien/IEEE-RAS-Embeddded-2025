#include <stdio.h>
#include <stdlib.h>

typedef struct CNode {
    int data;
    struct CNode* next;
} CNode;

CNode* createCNode(int data) {
    CNode* newNode = (CNode*)malloc(sizeof(CNode));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtPositionCLL(CNode** head, int data, int position) {
    CNode* newNode = createCNode(data);
    
    if (*head == NULL) {
        *head = newNode;
        newNode->next = newNode;
        return;
    }
    
    CNode* current = *head;
    CNode* prev = NULL;
    int count = 0;
    
    do {
        if (count == position) break;
        prev = current;
        current = current->next;
        count++;
    } while (current != *head);
    
    if (position == 0 || (current == *head && count < position)) {
        newNode->next = *head;
        
        CNode* last = *head;
        while (last->next != *head) {
            last = last->next;
        }
        
        last->next = newNode;
        *head = newNode;
    }
    else {
        prev->next = newNode;
        newNode->next = current;
    }
}

void printCLL(CNode* head) {
    if (head == NULL) {
        printf("Circular Linked List: EMPTY\n");
        return;
    }
    
    CNode* current = head;
    printf("Circular Linked List: ");
    
    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != head);
    
    printf("(back to head)\n");
}

void freeCLL(CNode** head) {
    if (*head == NULL) return;
    
    CNode* current = *head;
    CNode* next;
    
    (*head)->next = NULL;
    
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    
    *head = NULL;
    printf("Circular linked list freed from memory\n");
}

int main() {
    CNode* head = NULL;
    
    insertAtPositionCLL(&head, 10, 0);  // Insert at beginning
    insertAtPositionCLL(&head, 30, 1);  // Insert at end
    insertAtPositionCLL(&head, 20, 1);  // Insert in middle
    insertAtPositionCLL(&head, 5, 0);   // Insert at beginning again
    insertAtPositionCLL(&head, 25, 3);  // Insert in middle
    
    printf("Circular linked list after inserts:\n");
    printCLL(head);
    
    freeCLL(&head);
    
    return 0;
}