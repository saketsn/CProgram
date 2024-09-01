#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to initialize a linked list
struct Node* initialize() {
    return NULL;  // Initially, the list is empty
}

// Function to insert a new node at a specific position
void insert(struct Node** head, int data, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (position == 1) {  // Insert at the beginning
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;  // Move to the node before the position
    }

    if (temp == NULL) {
        printf("Position out of bounds\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to display the linked list
void display(struct Node* head) {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty\n");
        return;
    }

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to delete a node from any position
void deleteNode(struct Node** head, int position) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = *head;

    // If the node to be deleted is the first node
    if (position == 1) {
        *head = temp->next;  // Change head to the next node
        free(temp);          // Free the old head
        return;
    }

    // Traverse to the node before the one to be deleted
    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Position out of bounds\n");
        return;
    }

    // Node temp->next is the node to be deleted
    struct Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    free(nodeToDelete);  // Free the memory of the deleted node
}

int main() {
    struct Node* head = initialize();  // Initialize linked list
    int choice, data, position;

    while (1) {
        // Display the menu
        printf("\nOperations on Linked List:\n");
        printf("1. Insert data\n");
        printf("2. Delete data\n");
        printf("3. Display linked list\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Switch statement to perform operations based on user input
        switch (choice) {
            case 1:
                printf("Enter the data to insert: ");
                scanf("%d", &data);
                printf("Enter the position to insert at: ");
                scanf("%d", &position);
                insert(&head, data, position);
                printf("Data inserted.\n");
                break;

            case 2:
                printf("Enter the position to delete data from: ");
                scanf("%d", &position);
                deleteNode(&head, position);
                printf("Data deleted (if position exists).\n");
                break;

            case 3:
                printf("Linked List: ");
                display(head);
                break;

            case 4:
                printf("Exiting...\n");
                exit(0);  // Exit the program

            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}
