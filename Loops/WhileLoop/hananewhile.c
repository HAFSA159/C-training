#include<stdio.h>
#include<stdlib.h>


int main(){
    int n1,s=0,i=1;
    printf("entre la valeur de n1: ");
    scanf("%d",&n1);

    while(i<=n1){
       s=s+i;
       i++;
     }
 printf("%d est la somme \n ",s);
}
