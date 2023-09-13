#include<stdio.h>
#include<stdlib.h>

int main() {

int a,b;
char op;

printf("select an operation \n");
scanf("%c",&op);

printf("enter the first number \n");
scanf("%d",&a);
printf("enter the second number \n");
scanf("%d",&b);



switch(op)
{
case '+': 
 printf("%d + %d = %d \n", a,b,a+b);
 break;
case '*':
 printf("%d x %d = %d \n", a,b, a*b);
 break;
}

return(0);
}
