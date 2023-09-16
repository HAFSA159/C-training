#include <stdio.h>
#include <math.h>

int main(){

    float N[5],s;

    int i;
    
    while(i<5){
      
      printf("veuillez entre la note d'etudiant %d : ",(i+1));
      scanf("%f", &N[i]);
      s = s + N[i];
    i++;
    
    }

    printf(" La moyenne de classe : %.0f",s/5);

    
}

