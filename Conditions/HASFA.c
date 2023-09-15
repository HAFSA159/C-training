

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age ;
	printf ("enter your age : \n");
	scanf("%d", &age);
	;
    if (age >= 18)
    {
       printf ("Vous etes majeur !\n");
    }
    else
	printf ("Vous etes mineur !\n");


    return 0;
}
