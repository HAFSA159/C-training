#include <stdio.h>

int main() {
    // An Array with integer data type elements (sorted in ascending order):
    int size = 7;
    int table[] = {2, 13, 20, 21, 35, 80, 99};

    // The value that we are looking for:
    int value = 80;

    // Binary Search Algorithm:
    int low_index = 0;
    int high_index = size - 1;


    while (low_index <= high_index) {
        int mid_index = (low_index + high_index) / 2;
        int mid_value = table[mid_index];

        if (mid_value == value) {
            printf("The value %d is found at index %d.\n", value, mid_index);

            break;
        } else if (mid_value < value) {
            low_index = mid_index + 1;
        } else {
            high_index = mid_index - 1;
        }
    }


    return 0;
} 
