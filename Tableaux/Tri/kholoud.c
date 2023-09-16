#include<stdio.h>
#include<time.h>
#include <stdlib.h>

// Create an integer table
void  CreateTable(int *tab, int n){
    // Seed the random number generator with the current time
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        //fill the table with integers from 0 to 100
        tab[i] = rand()%101;
    }
}

//Display the table
void AfficheTab(int *tab, int n){
    for(int i=0;i<n;i++){
        printf("%d ",tab[i]);
    }
    printf("\n");
}


//bubble sorting Algorithm

void BubbleSort(int *t, int n){
    int i,j,tmp;
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        if(t[i]<t[j]){
            tmp=t[i];
            t[i]=t[j];
            t[j]=tmp;         
        }
        }
    }
}

int main(){
    int  n;
    int *tab =(int*)malloc(n*sizeof(int));
//Enter the table size n
    printf("enter the size of the table:\t");
    scanf("%d",&n);
    CreateTable(tab,n);
   //Display unsorted Table 
    AfficheTab(tab,n);
    BubbleSort(tab,n);
   //Display sorted table
    AfficheTab(tab,n); 

}
