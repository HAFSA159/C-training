#include "MAIN.H"

// Challenge 3: Écrivez un programme C qui utilise une structure Employe pour stocker le nom, le salaire horaire et le nombre d'heures travaillées d'un employé, puis calcule et affiche le salaire total de l'employé.

typedef struct {
    char name[20];
    float hourly_salary;
    float working_hours;
} Employe;

float total_salary(int hourly_salary, int working_hours) {
    return hourly_salary * working_hours;
}

int main() {
    Employe hamza = {
        "HAMZA MESKI",
        80.4,
        1000
    };

    float total = total_salary(hamza.hourly_salary, hamza.working_hours);
    printf("The total salary of %s is %.2f\n", hamza.name, total);
}
