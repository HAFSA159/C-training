#include<stdio.h>
 
float min (float a , float b){

 float min ;

 printf("Enter a number:\n");

 scanf("%f %f",&a ,&b );

 if (a<b)
	 min = a;
 else
	 min = b;

return min;
}


int  main(){

float  a , b , Min;

Min = min(a,b);

printf("\n %.2f is the min number \n",Min);

}

