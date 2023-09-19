

#include<stdio.h>
#include<string.h>

typedef struct{
     char name[10];
     int age ;
 
} Person; 

int main(){
    Person person1 ;
   

    strcpy(person1.name,"Alice");
    person1.age=25;

    printf("%s is your name \n",person1.name);
    printf("%d is your age \n",person1.age);
    return 0;
}
