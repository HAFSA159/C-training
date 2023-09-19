#include<stdio.h>
#include<stdlib.h>


struct Etudient{
char nom[20];
int age;
};
int main(){

int nbEtudient;
printf("How many user u want to enter ?\n");
scanf("%d",&nbEtudient);

struct Etudient etudient[nbEtudient];
printf("Bienvenue dans le gestionnaire d'étudiants!\n");
for(int i=0;i<nbEtudient;i++){
printf("Entrez le nom de letudient :");
scanf("%s",etudient[nbEtudient].nom);
printf("Entrez lage de letudient :");
scanf("%d",&etudient[nbEtudient].age);
printf("Étudient ajouté avec succès\n");
}
for(int i=0;i<nbEtudient;i++){
printf(" %d . Nom: %s , Age: %d", i+1, etudient[i].nom, etudient[i].age );
}
return 0;
}
