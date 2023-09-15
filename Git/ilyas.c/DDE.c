#include <stdio.h>
#include <math.h>

int main(){

    float D,a, b, c,x1,x2,x;
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);
    printf("Calculer D :\n ");
    D = b*b-4*a*c;

    printf("D = %.0f\n",D);
    if (D>0){
         x1=(-b+sqrt(D))/2*a;
         x2=(-b-sqrt(D))/2*a;
         printf("x1=%.2f\n",x1);
         printf("x2=%.2f\n",x2);
         printf("L'equation a deux solutions.\n");
         }
    else if (D<0){
        printf("L'equation n'a pas une solution.\n");}
    else if (D==0){
        x=-b/2*a;
        printf("x=%.2f\n",x);
        printf("L'equation a une seule solution.\n");}
    
    


return 0;
}
