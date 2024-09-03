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

// Function to insert a node at the front of the linked list
void insertAtFront(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;  // New node points to the current head
    *head = newNode;        // Head is updated to point to the new node
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

// Function to delete a node with a given data value
void deleteNode(struct Node** head, int key) {
    struct Node *temp = *head, *prev = NULL;

    // Case 1: If head node itself holds the key to be deleted
    if (temp != NULL && temp->data == key) {
        *head = temp->next;  // Change head
        free(temp);          // Free old head
        printf("\nNode with data %d deleted.\n", key);
        return;
    }

    // Case 2: Search for the key in the list and keep track of the previous node
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If the key was not present in the list
    if (temp == NULL) {
        printf("\nNode with data %d not found in the list.\n", key);
        return;
    }

    // Unlink the node from the linked list
    prev->next = temp->next;
    free(temp);  // Free memory
    printf("\nNode with data %d deleted.\n", key);
}

// Main function to call the other functions
int main() {
    struct Node* head = NULL;
    int size, data, position, deleteValue;

    size = getListSize();
    head = createList(size);
    displayList(head);

    // Insert a node at the front
    printf("\nEnter data to insert at the front: ");
    scanf("%d", &data);
    insertAtFront(&head, data);
    displayList(head);

    // Insert a node at a specific position
    printf("\nEnter data to insert at a specific position: ");
    scanf("%d", &data);
    printf("Enter position: ");
    scanf("%d", &position);
    insertAtPosition(&head, data, position);
    displayList(head);

    // Insert a node at the end
    printf("\nEnter data to insert at the end: ");
    scanf("%d", &data);
    insertAtEnd(&head, data);
    displayList(head);

    // Delete a node by value
    printf("\nEnter the value to delete: ");
    scanf("%d", &deleteValue);
    deleteNode(&head, deleteValue);
    displayList(head);

    return 0;
}
