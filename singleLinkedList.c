#include <stdio.h>
#include <stdlib.h>

// Structure for a Node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to ask the size of the linked list
int getListSize() {
    int size;
    printf("Enter the size of the linked list: ");
    scanf("%d", &size);
    return size;
}

// Function to create the linked list with user input
struct Node* createList(int size) {
    struct Node *head = NULL, *temp, *newNode;
    int data;

    if (size <= 0) {
        printf("Invalid size. No list created.\n");
        return NULL;
    }

    printf("Enter data for node 1: ");
    scanf("%d", &data);

    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = data;
    head->next = NULL;
    temp = head;

    for (int i = 2; i <= size; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter data for node %d: ", i);
        scanf("%d", &data);
        newNode->data = data;
        newNode->next = NULL;
        temp->next = newNode;
        temp = temp->next;
    }
    return head;
}

// Function to display the linked list
void displayList(struct Node* head) {
    struct Node* temp = head;
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to insert a node at a specific position
void insertAtPosition(struct Node** head, int data, int position) {
    struct Node *newNode, *temp = *head;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of bounds\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to insert a node at the end of the linked list
void insertAtEnd(struct Node** head, int data) {
    struct Node *newNode, *temp = *head;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Main function to call the other functions
int main() {
    struct Node* head = NULL;
    int size, choice, data, position;

    size = getListSize();
    head = createList(size);
    displayList(head);

    printf("\nEnter data to insert at a specific position: ");
    scanf("%d", &data);
    printf("Enter position: ");
    scanf("%d", &position);
    insertAtPosition(&head, data, position);
    displayList(head);

    printf("\nEnter data to insert at the end: ");
    scanf("%d", &data);
    insertAtEnd(&head, data);
    displayList(head);

    return 0;
}
