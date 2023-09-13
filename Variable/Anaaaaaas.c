#include<stdio.h>
 int main(){
	printf("insert first number\n");
	float n1;
	float n2;
	scanf("%f",&n1);
	printf("insert second number\n");
	scanf("%f",&n2);
	if (n1 < n2)
		printf("LOOOOL %f", n2);
	else 
		printf("LOOOLA %f", n1);

	return(0);
	
}
