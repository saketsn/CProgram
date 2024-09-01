#include <stdio.h>

#define MAX 100

// Function declarations
void insert(int arr[], int *n, int element, int position);
void delete(int arr[], int *n, int position);
int search(int arr[], int n, int element);
void display(int arr[], int n);

int main() {
    int arr[MAX], n, choice, element, position, searchResult;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        // Display menu
        printf("\nArray Operations Menu:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Insert operation
                printf("Enter element to insert: ");
                scanf("%d", &element);
                printf("Enter position (1 to %d): ", n+1);
                scanf("%d", &position);
                insert(arr, &n, element, position);
                break;
            case 2:
                // Delete operation
                printf("Enter position to delete (1 to %d): ", n);
                scanf("%d", &position);
                delete(arr, &n, position);
                break;
            case 3:
                // Search operation
                printf("Enter element to search: ");
                scanf("%d", &element);
                searchResult = search(arr, n, element);
                if (searchResult != -1)
                    printf("Element found at position %d\n", searchResult + 1);
                else
                    printf("Element not found\n");
                break;
            case 4:
                // Display operation
                display(arr, n);
                break;
            case 5:
                // Exit
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

// Function to insert an element at a specified position
void insert(int arr[], int *n, int element, int position) {
    if (position < 1 || position > *n + 1) {
        printf("Invalid position!\n");
        return;
    }
    
    for (int i = *n; i >= position; i--)
        arr[i] = arr[i - 1];

    arr[position - 1] = element;
    (*n)++;

    printf("Element inserted successfully!\n");
}

// Function to delete an element from a specified position
void delete(int arr[], int *n, int position) {
    if (position < 1 || position > *n) {
        printf("Invalid position!\n");
        return;
    }

    for (int i = position - 1; i < *n - 1; i++)
        arr[i] = arr[i + 1];

    (*n)--;

    printf("Element deleted successfully!\n");
}

// Function to search for an element in the array
int search(int arr[], int n, int element) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == element)
            return i;
    }
    return -1;  // Element not found
}

// Function to display the array
void display(int arr[], int n) {
    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

