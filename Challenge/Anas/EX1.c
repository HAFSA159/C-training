#include<stdio.h>

	struct pearsons {
	char name[20];
	int age;
} ;

	int  main(){
	struct pearsons  per1;
	printf("enter the name ");
	scanf("%s",per1.name);
	printf("enter Age ");
	scanf("%d",&per1.age);

	printf("Name is %s age is %d \n",per1.name ,per1.age);

	}
