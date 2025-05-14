#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void printList(Node* head) {
    Node* current = head;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void insertAtEnd(Node** head, int data) {
    Node* newNode = createNode(data);
    
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    
    Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

int getNodeValue(Node* head, int position) {
    Node* current = head;
    int count = 0;
    
    while (current != NULL) {
        if (count == position) {
            return current->data;
        }
        count++;
        current = current->next;
    }
    
    printf("Position %d is out of bounds\n", position);
    return -1;
}

void insertAfterValue(Node* head, int searchValue, int newValue) {
    Node* current = head;
    
    while (current != NULL) {
        if (current->data == searchValue) {
            Node* newNode = createNode(newValue);
            newNode->next = current->next;
            current->next = newNode;
            return;
        }
        current = current->next;
    }
    
    printf("Value %d not found in the list\n", searchValue);
}

int main() {
    Node* head = NULL;
    
    insertAtEnd(&head, 100);
    insertAtEnd(&head, 200);
    insertAtEnd(&head, 300);
    
    printf("Initial list:\n");
    printList(head);
    
    int value = getNodeValue(head, 1);
    printf("Value at position 1: %d\n", value);
    
    insertAfterValue(head, value, 250);
    printf("After insertion:\n");
    printList(head);
    
    Node* current = head;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }
    
    return 0;
}