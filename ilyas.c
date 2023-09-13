#include <stdio.h>
#include <string.h>


int main() {
    char  name[20];
    float height= 1.77;
    int age=21;
    printf("Le nom de l'utilisateur :");// Demander le non de l'utilisateur.
    fgets(name, 20, stdin); 
   
    printf("height : %.2f\n",height); printf("age : %d\n",age); return 0;
}


