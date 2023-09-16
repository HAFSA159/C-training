#include<stdio.h>

  
int main () {
    int T[10];
    int i,j,temp;
    printf("enter the elements of the tables");
    for(i=0;i<10;i++){

        printf("T[%d]",i);
        scanf("%d",&T[i]);
        } 
    for(i=0;i<10;i++){

      for(j=i+1;j<10;j++){

          if(T[i]>T[j]){

               T[i]=temp;
               T[i]=T[j];
               T[j]=temp;
        }
     }
 }
      printf("the elements in the increasing mode are:\n ");
      for(i=0;i<10;i++)

           printf("%d ",T[i]);
           printf("\t"); 

 return 0;

  }
