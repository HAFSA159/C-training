#include <stdio.h>


void bubble_sort(int tableau[],int n) {
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            if (tableau[j-1]>tableau[j]){
                int swap=tableau[j];
                tableau[j]=tableau[j-1];
                tableau[j-1]=swap;
            }
        }
    }
}
       
int main(){
    int n,s;
    printf("entrer la taille du tableau :");
    scanf(" %d" ,&n);
    int tableau[n];
    
   
    for( s=0;s<n;s++){
        printf("entrer la %d valeur  : ",s+1);
        scanf(" %d",&tableau[s]);
    }
    bubble_sort(tableau,n);
    for(int i=0; i<n; i++) {
        printf("%d ",tableau[i]);
    }

    printf("\n");
}
