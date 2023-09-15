#include<stdio.h>
	int main(){
	
		int first;
		int second;
		printf("enter first number :");
		scanf("%d",&first);
		printf("enter second number :");
		scanf("%d",&second);
		if(first<second){
			printf("maximum number is : %d\n", second);
			printf("and minimum number is : %d\n", first);
			}
		else if(second<first){
			printf("max number is : %d\n", first);
			printf("min number is : %d\n", second);
			}



}
