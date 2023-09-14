#include <stdio.h>
#include <string.h>

 int main () {
    int age; 
   do {
    printf("Enter your age: "); 
    scanf("%d", &age);
   
    if (age >=18 || age <100)
        printf("Your are %d \n",age);
     else
 	printf("Enter your age: ");
    }  
}
