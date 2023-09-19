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
        printf("Enter the name of the st person: "); 
        scanf("%s", persons[i].name);
        printf("Enter the age of the st person: ");
        scanf("%d", &persons[i].age);
    }
    for(int i=0;i<size;i++){
    printf(" %d . Nom: %s , Age: %d \n", i+1, persons[i].name, persons[i].age );
}
}
