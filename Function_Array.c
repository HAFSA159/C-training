#include<stdio.h>
#include<time.h>
#include <stdlib.h>

// Create an array of random integers
void  CreateArrayR(int *tab, int n){
    // Seed the random number generator with the current time
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        //fill the array with integers from 0 to 100
        tab[i] = rand()%101;
    }
}

// Create a array of entered integers

void CreateArray(int *tab, int n){
        printf("Enter the array values :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&tab[i]);
    }
}


int * Array(int n){
    //int *tab;
    int *tab =(int*)malloc(n*sizeof(int));
    printf("Enter the array values :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&tab[i]);
    }
    return tab;
}


//Display the Array
void AfficheArray(int *tab, int n){
    for(int i=0;i<n;i++){
        printf("%d ",tab[i]);
    }
    printf("\n");
}


//bubble sorting Algorithm

void BubbleSort(int *t, int n){
    int i,j,tmp;
    for(i=0;i<n;i++){
        for(j=1;j<n-i;j++){
        if(t[j-1]>t[j]){
            tmp=t[j-1];
            t[j-1]=t[j];
            t[j]=tmp;         
        }
        }
    }
}


// Linear searching algo

int Linear(int *tab, int n , int val){
    int i;
    for(i=0;i<n;i++){
        if(tab[i]==val) 
         return i;   
    }
 return -1;
}

//Binary search

int BinaryS(int *tab, int n, int val){
    int debut,fin,mid;
    debut=0;
    fin=n-1;
while(debut<=fin)
{
    mid=(debut+fin)/2;
if(tab[mid]==val)
return mid;
else 
    if(tab[mid]<val)
    debut=mid+1;
    else 
      if(tab[mid]>val)
          fin=mid-1;
          }
return -1;
}

int main(){
    int  n,val,r;
    //Enter the table size n
    printf("enter the size of the table:\t");
    scanf("%d",&n);
    // int *tab =(int*)malloc(n*sizeof(int));
    //CreateArrayR(tab,n);
//CreateArray(tab,n);
    int *tab = Array(n);
   //Display unsorted Table 
    //AfficheArray(tab,n);
 //Buble sorting
   BubbleSort(tab,n);
//Display sorted table
 AfficheArray(tab,n); 
/////////////:::: Search   ///////////////////////////////
//Enter the value you want to find
    printf("enter the value  you want to find:\t");
    scanf("%d",&val);
   // r=Linear(tab,n,val);
    r= BinaryS(tab,n,val);
    printf("the value %d is at the index %d\n", val,r);
   

}
