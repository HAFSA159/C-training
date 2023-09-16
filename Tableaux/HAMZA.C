#include <stdio.h>

void clean_buffer() {
    while (getchar() != '\n');
}

float insert_grades(float* arr) {
    // Data entered by user: 
    float sum = 0;
    float average = 5;

    for (int i = 0; i < 5; i++) {
        do {
            printf("Enter the grade of the %d st student: ", i + 1); 
            if (scanf("%f", arr + i) != 1) *(arr + i) = -1;
            clean_buffer();
        } while (*(arr + i) == -1);
        sum += *(arr + i);
    }

    return sum / average;
}

int main() {
    float student_grades[5]; 
    float student_grades_avg = insert_grades(student_grades); 
    printf("The average of grades is %.2f\n", student_grades_avg);

    return 0; 
}
