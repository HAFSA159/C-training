#include <stdio.h>
#include <math.h>

typedef struct Point{
  double x,y;
} Point;

double DistanceEucl(Point A, Point B){

    double d;
    return sqrt( (A.x-B.x)*(A.x-B.x) + (A.y-B.y)*(A.y-B.y) );
    printf("test \n");

}

void Points(Point A, Point B){

    printf("Entrez les coordonnees du point A:\n");
    scanf("%lf %lf",&A.x,&A.y);
    printf("Entrez les coordonnees du point B:\n");
    scanf("%lf %lf",&B.x,&B.y);
}

int main () {

    Point A,B;
    double dist;
    //Points(A,B);
    printf("Entrez les coordonnees du point A:\n");
    scanf("%lf %lf",&A.x,&A.y);
    printf("Entrez les coordonnees du point B:\n");
    scanf("%lf %lf",&B.x,&B.y);
    dist=DistanceEucl(A,B);
    printf(" la distance Euclidienne entre A et B = %lf \n",dist);


   
   

   return 0;
}
