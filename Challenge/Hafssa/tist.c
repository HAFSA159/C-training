#include<stdio.h>
#include<stdlib.h>

struct Personne {

char name[50];
int age;
};

int main(){

struct Personne personne;
printf("Enter your name:\n");
scanf("%s",personne.name);

printf("Enter your age:\n");
scanf("%d",&personne.age);

printf("Nom: %s\n",personne.name);
printf("Age: %d\n",personne.age);
return 0;
}
