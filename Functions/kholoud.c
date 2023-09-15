#include<stdio.h>


//fonction max
float MaxNbr(float a, float b){

float max;

if (a>b)
	max=a;
else
	max=b;
return max;
}


//fonction min
float MinNbr(float a, float b){

float min;

if (a<b)
	min=a;
else 
	min=b;
return min;
}



int main(){

float n1,n2,n3,n4,max,min;
printf("Entrer four numbers: \n");
scanf("%f %f %f %f",&n1,&n2,&n3,&n4);



min=MinNbr(n1,n2);
printf("le min de %f et %f  est: %f \n",n1,n2,min);


max=MaxNbr(n3,n4);
printf("le max de %f et %f  est: %f \n",n3,n4,max);

return 0;
}
