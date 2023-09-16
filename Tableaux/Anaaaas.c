//write a program in C that store 5 numbers in object and counts the average of the numbers
#include <stdio.h>

int main() {
    int numbers[5]; // Array to store 5 numbers
    int sum = 0;
    double average;

    // Input phase: Read 5 numbers from the user
    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    // Calculate the average
    average = (double)sum / 5;

    // Output the results
    printf("The numbers you entered are: ");

    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");
    printf("The average of these numbers is: %.2f\n", average);

    return 0;
}
