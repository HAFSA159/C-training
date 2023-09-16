
#include <stdio.h>

void display_array(int* pointer, int size) {
    for (int i = 0; i < size - 1; i++) {
        printf("%d ", pointer[i]);
    }
    printf("\n"); 
}

void buble_sort(int* pointer, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (pointer[i] < pointer[j]) {
                int swap = pointer[i]; 
                pointer[i] = pointer[j]; 
                pointer[j] = swap;
            }
        }
    }
}

void selection_sort(int* pointer, int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_element = pointer[i];
        int min_index = i;
        for (int j = i + 1 ; j < size - 1; j++) {
            if (pointer[j] < min_element) min_index = j;
        }

        int swap = pointer[i]; 
        pointer[i] = pointer[min_index];
        pointer[min_index] = swap;
    }
}

int main() {
    int arr[] = {2, 11, 6, 9, 33, 44, 4, 1, 22};
    
    // Bubble Sort Algorithm:
    // buble_sort(arr, sizeof(arr) / 4); 
    selection_sort(arr, sizeof(arr) / 4);
    // Display Array:
    display_array(arr, sizeof(arr) / 4);

    return 0;
}


