#include<stdio.h>
#include<stdlib.h>

struct Employe{
 char nom[20];
 float salaire_horaire,nombre_heur;
};

int main(){
struct Employe employe;
printf("\nEntrer le nom : ");
scanf("%s",employe.nom);
printf("\nEntrer le salaire horaire : ");
scanf("%f",&employe.salaire_horaire);
printf("\nEntrer le nombre des heures : ");
scanf("%f",&employe.nombre_heur);
printf("\nNom de lemploye : %s \n",employe.nom);
printf("\nSalaire total : %.2f \n\n",employe.salaire_horaire*employe.nombre_heur);
 return 0;
}
