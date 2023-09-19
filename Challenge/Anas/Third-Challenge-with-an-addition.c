#include<stdio.h>
#include<string.h>

typedef struct {
        char name[40];
        int age;
} Person;

int main(){
    int size ;
   
    
    printf("enter how many ppl ");
    scanf("%d",&size);
    Person persons[size];
    for (int i = 0; i < size; i++) {
        printf("Enter the name of the %d st person: ", i  + 1); 
        scanf("%s", persons[i].name);
        printf("Enter the age of the %d st person: ", i + 1);
        scanf("%d", &persons[i].age);
    }
    int naame;
    printf("enter persons name ");
    scanf("%d",&naame);
    printf("%s\n",persons[naame].name);
    printf("%d\n",persons[naame].age);
}   
