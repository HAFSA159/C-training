#include <stdio.h>
#include <string.h>

 int main () {
    int age; 
    printf("Enter your age: "); 
    scanf("%d", &age);
   
    if (age == 18) {
        printf("Your are 18\n");
    }else if (age == 19) {
        printf("You are 19\n");
    }
    else {
        printf("You are not\n");
    }
}
