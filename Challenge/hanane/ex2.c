#include<stdio.h>
#include<string.h>
#include<math.h>
typedef struct{
     float x;
     float y;
 
} Point; 

int main(){
    Point a,b;
    float D;
    printf("entrer les coordones de a  :\n");
    scanf ("%f%f",&a.x,&a.y);
    printf("entrer les coordones de b  :\n");
    scanf ("%f%f",&b.x,&b.y);
    D=sqrt(pow(a.x-a.y,2)+pow(b.x-b.y,2));
    printf("la distance entre les deux point est : %f",D);
    return 0;
}
