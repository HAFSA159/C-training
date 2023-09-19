#include<stdio.h>
#include<string.h>
	typedef struct  {

	char name[20];
	int salaire,ht;
} salaire;



int main(){

	salaire pirsn;
	printf("Entrez le nom de l'employé :" );
	scanf("%s",pirsn.name);
	printf("Entrez le salaire horaire:");
	scanf("%d",&pirsn.salaire);
	printf("Entrez le nombre d'heures travaillées");
	scanf("%d",&pirsn.ht);
	printf("Salaire total:%d ",pirsn.salaire*pirsn.ht);
	

}
