#include<stdio.h>
 int main() {

 float la_note[5];
 float notes;
 float somme=0 , moyenne;

 for (int i=0;i<5;i++){

 printf("Enter les notes\n");
 scanf("%f", &notes);

 la_note[i]=notes;
 somme + = la_note[i];
}
 moyenne = somme / 5;
 printf("la moyenne de la classe c'est: %.2f \n", moyenne);
}
