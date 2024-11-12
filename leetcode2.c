#include <stdio.h>

// Function to print subsets
void printSubsets(int arr[], int n, int index, int subset[], int subsetSize) {
    if (index == n) {
        // Print subset
        printf("{ ");
        for (int i = 0; i < subsetSize; i++) {
            printf("%d ", subset[i]);
        }
        printf("}\n");
        return;
    }

    // Include the current element
    subset[subsetSize] = arr[index];
    printSubsets(arr, n, index + 1, subset, subsetSize + 1);

    // Exclude the current element
    printSubsets(arr, n, index + 1, subset, subsetSize);
}

// Function to find and print all subsets
void findAllSubsets(int arr[], int n) {
    int subset[100]; // Assuming maximum array size
    printSubsets(arr, n, 0, subset, 0);
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    findAllSubsets(arr, n);

    return 0;
}
