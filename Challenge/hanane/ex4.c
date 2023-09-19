#include<stdio.h>
#include<string.h>

typedef struct{
   char name[30];
   int age;
}list;  

int main(){
list student[5];
int i;
for(i=0;i<5;i++){
    printf("enter the name of %d student :",i+1);
    scanf("%s",student[i].name);
    printf("enter the age of %d student :",i+1);
    scanf("%d",&student[i].age);
}
    for(i=0;i<5;i++){
    printf("the name of student %d is %s and his age is %d\n",i+1,student[i].name,student[i].age);
    
}

}
