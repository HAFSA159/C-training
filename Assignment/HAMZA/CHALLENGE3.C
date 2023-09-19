#include "MAIN.H"
// Challenge 4: Écrivez un programme C qui utilise une structure Etudiant pour représenter un étudiant avec un nom et un âge. Créez une liste (tableau) de 5 étudiants et effectuez les opérations suivantes :
typedef struct {
    char name[20]; 
    int age;
} Student;

void clean_buffer() {
    while (getchar() != '\n'); 
}

void insert_students(Student* students, int size) {
    for (int i = 0; i < size; i++) {
        // Handling the name input:
        int cond = 1;
        do {
            printf("Enter the name of the %d st student: ", i + 1); 
            fgets(students[i].name, sizeof(students[i].name), stdin);
            if (students[i].name[strlen(students[i].name) - 1] == '\n') {
                students[i].name[strlen(students[i].name) - 1] = '\0'; 
            }else {
                clean_buffer();
            }
            // Checking if the user input is not a number: 
            if (atoi(students[i].name) == 0) cond = 0;
        } while (cond);

        // Handling the age input:
        cond = 1;
        do {
            printf("Enter the age of the %d st student: ", i + 1);
            if (scanf("%d", &students[i].age) == 1) cond = 0;
            clean_buffer();
        } while (cond);
    }
}

void display_students(Student* studnets, int size) {
    for (int i = 0; i < size; i++) {
        printf("The age of %s is %d years old.\n", studnets[i].name, studnets[i].age);
    }
}

int main() {
    int size = 5;
    Student students[size]; 
    insert_students(students, size);
    display_students(students, size);

    return 0;
}
