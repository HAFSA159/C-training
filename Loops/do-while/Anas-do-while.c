#include <stdio.h>
#include <string.h>

int main () {
    int age;

    int condition = 0;
    do {
        if (condition == 0) {
            printf("Enter your age: ");
            scanf("%d", &age);
            while (getchar() != '\n');
            if (age >=18 && age <100) 
                printf("Your are %d \n",age);
            else   
                condition = 1;
        }
        
        if(condition == 1) {
            printf("wrong number, Enter your age: ");
            scanf("%d", &age);
            while (getchar() != '\n');
        
            if (age >=18 && age <100)
                printf("Your are %d \n",age);
                
        }
            
    } while(age <18 || age >100);
}
