#include<stdio.h>
	int main (){

		int T[20],temp,n,i,j;

		do{
			printf("enter table size-max is 20 :");
			scanf("%d",&n);
		} while(n<0 || n>20);

		printf("table size is %d \n",n);

		for(i=0;i<n;i++){
		printf("enter value T[%d]",i+1);
		scanf("%d",&T[i]);
		}
		for(i=0;i<n-1;i++)
			for(j=0;j<n-1-i;j++){
			if(T[j]>T[j+1]){
			temp=T[j];
			T[j]=T[j+1];
			T[j+1]=temp;}
		}
		printf("sorted number =" );
		for(i=0;i<n;i++)
		printf(" %d",T[i]);

}
