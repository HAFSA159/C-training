#include <stdio.h>
#include <string.h>

    struct student
    {
        char name[20];
        int age;
    };


int main(){
    
    struct student ilyas;

    strcpy(ilyas.name ,"ilyas");
    ilyas.age=21;
    
    printf("le nom est : %s\n",ilyas.name);
    printf("son age est : %d\n",ilyas.age);


    return 0;

}
