#include<stdio.h>
int main(){

int i,n,sum=0;;

printf("Enter a number \n");
scanf("%d",&n);

for(i=1;i<=n;i++){
sum+=i;
}

printf("the sum from 1 to %d is : \t %d \n",n,sum);
}
