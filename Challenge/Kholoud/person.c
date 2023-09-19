#include<stdio.h>

typedef struct Personne{
  int age;
  char nom[10];
} Personne;


void EnterStruct(Personne  *p){
    printf("entrer age : \n");
    scanf("%d",&p->age);
    printf("entrer le nom: \n");
    scanf("%s",p->nom);


}

//fonction to display a personne infos
void DisplayStruct(Personne p ){

    printf(" l age est :%d\n",p.age);
    printf("le nom est : %s \n",p.nom);
}

int main(){
   // Personne P={28,"kholoud"};
   Personne  P;
    EnterStruct(&P);
    DisplayStruct(P);

}
