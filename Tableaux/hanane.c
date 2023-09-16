#include<stdio.h>


    
int main () {
    int T[5];
    float i,s=0,n,m;

    for(i=0;i<5;i++){

    printf("enter the value of the notes");
    scanf("%f",&n);
    T[(int)i]=n;
    s=s+T[(int)i];
        }

        m=s/5;
        printf("la moyenne des nombres est %f",m);

        } 
