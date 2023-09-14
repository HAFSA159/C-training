#include <stdio.h>
#include <string.h>

int main() {
        char name[20];

        do {
                printf("Enter Your Name: ");
                fgets(name, sizeof(name), stdin);
                if (name[strlen(name) - 1] == '\n') name[strlen(name) - 1] = '\0';
        } while(strcmp(name, "hamza") != 0);

        printf("EOP\n");

        return 0;
}
