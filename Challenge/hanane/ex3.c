
#include<stdio.h>
#include<string.h>

typedef struct{
   char name[30];
   float salhor;
   int nbrh;
   int saltot;
} salairy; 

int main(){

    salairy me;
    int saltot;
    printf("entrer le nom :\n");
    scanf ("%s",me.name);
    printf("entrer le salaire horaire:\n");
    scanf ("%f",&me.salhor);
    printf("entrer le nombre d heures:\n");
    scanf ("%d",&me.nbrh);
    printf("%.2f est le salair total :\n",me.nbrh*me.salhor);
    
}
