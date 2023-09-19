#include<stdio.h>

	int main(){

	int T[20],n,j,i,temp;
	do{
	printf("enter table size  ");
	scanf("%d",&n);
		}while(n<=0 || n>20);

	for(i=0;i<n;i++){

	printf("enter number T[%d] ",i+1);
	scanf("%d",&T[i]);
	}
for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n  - 1; j++) {
            if (T[j] > T[j + 1]) {
                temp = T[j];
                T[j] = T[j + 1];
                T[j + 1] = temp;
            }
        }
    }
	for(i=0;i<n;i++)
	printf(" %d",T[i]);
	 
}
