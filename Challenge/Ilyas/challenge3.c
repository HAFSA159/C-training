#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[20];
    float prix,nombre;
}Employer;


int main(){

    Employer ahmed;

    strcpy(ahmed.name ,"ahmed");
    ahmed.prix = 15.5;
    ahmed.nombre = 50;

    printf("le nom d'employer : %s\n",ahmed.name);
    printf("le salaire horaire : %.2f\n",ahmed.prix);
    printf("le nombre d'heures travaillées : %.2f\n",ahmed.nombre);

    float s=ahmed.prix*ahmed.nombre;

    printf("le salaire total de l'employé est : %.2f\n",s);

}
