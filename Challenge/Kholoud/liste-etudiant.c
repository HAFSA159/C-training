#include<stdio.h>


typedef struct Etudiant{
  char name[10];
  int age;
} Etudiant;



void EnterStudent(Etudiant *e, int n){
    int i;

for (i=0;i<n;i++){
    printf("Entrer le nom etudiant ");
    scanf("%s",e[i].name);
    printf("Entrer age etudiant ");
    scanf("%d",&e[i].age);

    printf("Etudiant ajoute avec succes!\n");
}
}



void DisplayStudents(Etudiant *e, int n){
    int i;

    printf("Bienvenue dans le gestionnaire etudiant \n\n");
    printf("La liste des etudiants\n");
    for (i=0;i<n;i++){
    printf("%d. Nom : %s . Age : %d \n",i+1,e[i].name,e[i].age);
    }
}





int main(){
int i,n;
printf("Enter le nombre etudiant que vous voullez ajouter:\n");
scanf("%d",&n);
Etudiant e[n];

printf("Ajouter un etudiant: \n");

EnterStudent(e,n);
DisplayStudents(e,n);


    return 0;
}
