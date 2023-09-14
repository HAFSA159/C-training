


#include<stdio.h>
#include<stdlib.h>


int main(){
    int n1,s=0,i;
    printf("entre la valeur de n1: ");
    scanf("%d",&n1);

    for(i=n1;i>=1;i--){
       s=s+i;
     }
 printf("%d est la somme \n ",s);
}
