#include<stdio.h>
#include<stdlib.h>

int main() {
char  op;
int  choice;
float result;
double  n1 , n2 ;

    printf("**WELCOME**\n");


    do {
        printf("Enter an operator +,-,*,/ if want to exit press x: \n");
        scanf(" %c",&op);

        printf("Enter 2 numbers:");
        scanf("%lf %lf",&n1,&n2);

        switch (op){
            case '+':
               result = n1 + n2;
               printf("%.2lf + %.2lf = %.2lf\n",n1, n2, n1+n2);
               break;
            case '-':
               result = n1 - n2;
               printf("%.2lf - %.2lf = %.2f\n", n1, n2, n1-n2);
               break;
            case '*':
               result = n1 * n2;
               printf("%.2lf * %.2lf = %.2f\n", n1, n2, n1*n2);
               break;
            case '/':
               result = n1 / n2;;
               printf("%.2lf / %.2lf = %.2f\n", n1, n2, n1/n2);
               break;
        }
    } while(op != 'x');

}
