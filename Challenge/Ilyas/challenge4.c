#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[20];
    int age;
}ID;

int main(){
    // Le tableau des etudiants :
    ID etudiants[5];

    // Loop pour enter le nom et l'age de chaque etudiant :
    for(int i=0; i<5; i++){
        printf("veuillez entrer le nom de %d d'etudiant : ",i+1);
        scanf("%s",etudiants[i].name);
        printf("veuillez entrer l'age de %d d'etudiant : ",i+1);
        scanf("%d",&etudiants[i].age);
    }

    // L'affichage de tous les etudiants du classe :
    for(int i=0; i<5; i++){
        printf("le nom et l'age de %d etudiant : %s, %d\n",i+1,etudiants[i].name,etudiants[i].age);
    }

}
