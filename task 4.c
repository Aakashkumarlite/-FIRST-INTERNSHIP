#include <stdio.h>

// Function to find the largest number in an array
int findLargest(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int size;

   
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[size]; 

    
    printf("Enter %d integer(s):\n", size);
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    int largest = findLargest(arr, size);
    printf("The largest number in the array is: %d\n", largest);

    return 0;
}
