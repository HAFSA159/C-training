#include <stdio.h>
#include <stdlib.h>
int main() {
      float T;
      printf("entrer la temperateur :");
      scanf("%f", &T) ;
      if(T<0)
      printf("glace");
      else if (T >=0 && T <=100)
      printf("liquide");
      else
      printf("vapeur");
return 0;
}
