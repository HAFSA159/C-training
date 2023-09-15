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



min=MinNbr(MinNbr(n1,n2),MinNbr(n3,n4));
printf("le min des quatres nombres est: %f \n",min);


max=MaxNbr(MaxNbr(n1,n2),MaxNbr(n3,n4));
printf("le max des quatres nombres est: %f \n",max);


//max=MaxNbr(n3,n4);
//printf("le max de %f et %f  est: %f \n",n3,n4,max);

return 0;
}
