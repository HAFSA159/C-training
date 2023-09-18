#include<stdio.h>
#include<stdlib.h>
#include <string.h>


double sqRoot(double a){

double s,i;

for( i=0.01;i*i<a;i=i+0.01);
return i;

}

double squareRoot(double a) {
    
  double i = 0;
  double j = a / 2;

  while (j != i) {
    i = j;
    j = (a / i + i) / 2;
  } 
  return j; 
}


double power(double a, double b){

  double p=1;


	for(int i=0;i<b;i++)
	p*=a;

	return p;
}

int main() {
char  opt[4];
double n1,n2,res;


    printf("\n***************************   Calculator  *********************************\n\n");


    do {
        printf("Enter an operator (+, -, *, /, sqrt, pow), if want to exit press x: \n");
        scanf(" %s",opt);
        
	if(strcmp(opt,"sqrt")!=0){
	printf("Enter two numbers \n");
	scanf("%lf %lf",&n1,&n2);
	}
	else {
	printf(" You have selected the square root \n Enter one number \n");
	scanf("%lf",&n1);
	}

	    if (*opt == '+')  
	    {  
		res = n1 + n2; // add two numbers  
		printf (" Addition of %.2lf and %.2lf is: %.2lf \n", n1, n2, res);  
	    }  
	      
	    else if (*opt == '-')  
	    {  
		res = n1 - n2; // subtract two numbers  
		printf (" Subtraction of %.2lf and %.2lf is: %.2lf \n", n1, n2, res);  
	    }  
	      
	    else if (*opt == '*')  
	    {  
		res = n1 * n2; // multiply two numbers  
		printf (" Multiplication of %.2lf and %.2lf is:%.2lf \n", n1, n2, res);  
	    }  
	      
	    else if (*opt == '/')  
	    {  
		if (n2 == 0)   // if n2 == 0, take another number  
		{  
		    printf (" \n Divisor cannot be zero. Please enter another value ");  
		    scanf ("%lf", &n2);        
		}  
		res = n1 / n2; // divide two numbers  
		printf (" Division of %.2lf and %.2lf is: %.2f \n", n1, n2, res);  
	    }  
	    else if(strcmp (opt, "sqrt")==0){
            res=sqRoot(n1);
               printf(" la racine carre de %.2lf est %.2lf \n", n1, res);
		}
	    else if(strcmp (opt, "pow")==0){
            res=power(n1,n2);
               printf(" la puissance de %.2lf^ %.2lf est %.2lf \n", n1,n2, res);
		}
	    return 0;  
     
    } while(*opt != 'x');

	printf("%s \n",opt);

}
