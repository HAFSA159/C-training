#include <stdio.h>

// Buble Sort Algorithm:
void buble(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 1; j < size - i; j++) {
            if (arr[j] < arr[j - 1]) {
                int swap = arr[j]; 
                arr[j] = arr[j - 1]; 
                arr[j - 1] = swap;
            }
        }
    }
}

// Display An Array:
void dispaly_arr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size = 5;
    int arr[size] = {5, 4, 3, 2, 1};

    dispaly_arr(arr, size); 
    buble(arr, size); 
    dispaly_arr(arr, size); 
}
