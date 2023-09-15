#include<stdio.h>

float min (float a, float b){
    if(a<b) return a;
    else return b;
} 

float max (float a, float b){
    if(a<b) return b;
    else return a;
}

int main () {
    float n1,n2,n3,n4;
    printf("enter the value of the four numbers :\n");
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
    printf("the minimum of 4 numbers is %f:\n", min(min(n1,n2),min(n3,n4)));
    
    printf("the maximum of 4 numbers is %f:\n", max(max(n1,n2),max(n3,n4)));
    
    return 0;
}
