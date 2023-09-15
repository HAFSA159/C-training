#include <stdio.h>
#include <string.h>

int main() {

        for (int i = 0; i < 10; i++) {
                for (int j = 0; j < i; j++) {
                        printf("* ");
                }
                printf("\n");
        }

        printf("EOP\n");

        return 0;
}

