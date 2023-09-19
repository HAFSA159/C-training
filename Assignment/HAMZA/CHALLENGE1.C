#include "MAIN.H"

// Challenge 1: Écrivez un programme C qui utilise une structure Personne pour stocker le nom et l'âge d'une personne, puis affiche ces informations.

typedef struct {
    char name[20]; 
    int age;
} Person;

void clean_buffer() {
    while (getchar() != '\n');
}

void insert(Person* hamza) {
    //
    printf("Enter Your Name: "); 
    fgets(hamza->name, sizeof(hamza->name), stdin);
    if (hamza->name[strlen(hamza->name) - 1] == '\n') {
        hamza->name[strlen(hamza->name) - 1] = '\0';
    }else {
        clean_buffer();
    }

    //
    int cond = 1;
    do {
        printf("Enter your Age: "); 
        if (scanf("%d", &hamza->age) == 1) cond = 0;
        clean_buffer();
    } while (cond);
}

int main() {
    Person hamza; 
    insert(&hamza);
    puts(hamza.name);
    
    return 0;
}

