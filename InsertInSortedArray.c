#include <stdio.h>

void insertElement(int arr[], int size, int element) {
    int i = size - 1;  // Index of last element

    // Move all elements greater than 'element' one position ahead
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert 'element' at its deserving position
    arr[i + 1] = element;
    size++;  // Increase the size of the array by 1
}

int main() {
    int arr[10] = {1, 3, 5, 7, 9};  // Sorted array
    int size = 5;  // Current size of the array

    int element;
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Call the insertElement function
    insertElement(arr, size, element);

    printf("Array after inserting the element: ");
    for (int i = 0; i < size + 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
