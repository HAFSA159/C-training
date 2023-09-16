#include<stdio.h>

int main(){


//saisir les 5 notes des etudiants
int i,sum=0,moy=0,nbr=5,grade;
int tab[nbr];

for(i=0; i<nbr;i++){
printf("Enter the grade of the student nbr %d \t",i+1);
scanf("%d",&grade);
tab[i]=grade;
sum+=tab[i];
}

moy=sum/nbr;

printf("la moyenne de la classe est %d \t",moy);
//printf("la somme de la classe est %d \t",sum);

return 0;
}
