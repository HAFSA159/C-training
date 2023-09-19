#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct 
{
    float x1,y1,x2,y2;
} Point;

int main(){
    float x1,y1,x2,y2;

    Point P1;
    Point P2;

    P1.x1=2;
    P1.y1=1.5;
    P2.x2=-3;
    P2.y2=1;

    printf("les coordonnées x et y de premier point sont : %.2f %.2f\n",P1.x1,P1.y2);
    printf("les coordonnées x et y de deuxieume point sont : %.2f %.2f\n",P2.x2,P2.y2);

    float distance = sqrt(pow(P1.x1 - P1.y1, 2) + pow(P2.x2 - P2.y2, 2));

    printf("la distance euclidienne entre deux points : %f\n",distance);

    
}
