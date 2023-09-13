#include <stdio.h>
#include <string.h>

 int main () {
    int age; 
    printf("Enter your age: \n"); 
    scanf("%d", &age);
    printf("age = %d\n", age);
    getchar(); 

    char string[20];
    printf("Enter a string: ");
    fgets(string, 20, stdin);
    printf("strin = %s \n", string); 
}
