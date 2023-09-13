#include <stdio.h>
#include <string.h>

 int main () {
    char name[22]; int age; float high;

    // Asking the user to enter its informations:
    printf("Enter Your Name: ");
    fgets(name, sizeof(name), stdin);
    if (name[strlen(name) - 1] == '\n') name[strlen(name) - 1] = '\0';
 
 
    printf("Enter Your age: ");
    scanf("%d", &age);

    printf("Enter Your high: ");
    scanf("%f", &high);
 
    // Display the user informations:
    printf("%s is %d years old, with %.2f m\n", name, age, high);
 
    return 0;
}
