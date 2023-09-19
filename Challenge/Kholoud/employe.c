#include<stdio.h>


typedef struct Employe{
  char name[10];
  double nbr_h_t, salaire_h;
} Employe;



void EnterStruct(Employe  *e){
    
    
    printf("entrer  le salaire horaire: \n");
    scanf("%lf",&e->salaire_h);

     printf("entrer  le nombre heure travaillee: \n");
    scanf("%lf",&e->nbr_h_t);
    printf("entrer le nom empolye: \n");
    scanf("%s",e->name);
}


double SalaireTotal(Employe e){
    double s;
    s=((e.nbr_h_t) *(e.salaire_h));
    return s;
}



int main(){
    Employe e;
    double salaire;
    EnterStruct(&e);
    printf("le nom employe: %s \n",e.name);
    salaire = SalaireTotal(e);
    printf("le salaire total est : %.2lf \n",salaire);


return 0;
}



