
#include<stdio.h>
#include<string.h>
#include<math.h>
	typedef struct {
	float x,y;
	} cord;

	int main(){

	cord p1,p2;
	float dis;
	printf("Entrez les coordonnées du point 1 (x1 y1) :");
	scanf("%f %f",&p1.x,&p1.y);

	printf("Entrez les coordonnées du point 2 (x2 y2) :");
	scanf("%f %f",&p2.x,&p2.y);
	dis=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
	printf(" %.2f la distance entre les deux point . ",dis);
}
