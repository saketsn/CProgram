#include <stdio.h>

#define MAX_SIZE 100  // Defining maximum size of the array

// Function prototypes
void takeArraySize(int *size);
void enterArrayData(int arr[], int size);
void reverseArray(int arr[], int size);
int sumArray(int arr[], int size);
void displayArray(int arr[], int size);

int main() {
    int arr[MAX_SIZE];  // Static array
    int size, sum;

    // Function to take size of the array
    takeArraySize(&size);

    // Function to enter the data into the array
    enterArrayData(arr, size);

    // Display the original array
    printf("\nOriginal array: ");
    displayArray(arr, size);

    // Function to reverse the array
    reverseArray(arr, size);
    printf("\nReversed array: ");
    displayArray(arr, size);

    // Function to sum the array elements
    sum = sumArray(arr, size);
    printf("\nSum of all elements: %d\n", sum);

    return 0;
}

// Function to take size of the array
void takeArraySize(int *size) {
    printf("Enter the size of the array: ");
    scanf("%d", size);
}

// Function to enter data into the array
void enterArrayData(int arr[], int size) {
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Function to reverse the array
void reverseArray(int arr[], int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

// Function to sum all elements of the array
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to display the array
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}