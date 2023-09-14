#include<stdio.h>
#include<stdlib.h>
int x,y;
char calculatrice;
int main(){
    printf("entre la valeur de x: ");
    scanf("%d",&x);

    printf("Eneter operation between (+, -,* ): "); 
    scanf(" %c", &calculatrice);

    printf("entrer la valeur de y: ");
    scanf("%d",&y);

    switch(calculatrice){
        case '+':printf("%d+%d=%d\n",x,y,(x+y));
        break;
       case '-':printf("%d-%d=%d\n",x,y,(x-y));
       break;
       case '':printf("%d*%d=%d\n",x,y,(x*y));
break;
default:
printf(" you are wrong\n");
break;
}
}
