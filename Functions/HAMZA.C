#include <stdio.h>

void min_max_function_2_nmb (float nmb1, float nmb2) {
    if (nmb1 > nmb2) printf("%.2f is higher than %.2f\n", nmb1, nmb2);
    else printf("%.2f is lower than %.2f\n", nmb1, nmb2);
}

void min_max_function_4_nmb (float nmb1, float nmb2, float nmb3, float nmb4) {
    float arr[] = {nmb1, nmb2, nmb3, nmb4}; 
    
    float min = arr[0]; 
    float max = arr[0]; 

    for (int i = 0; i < 4; i++) {
        if (arr[i] < min) min = arr[i]; 
        if (arr[i] > max) max = arr[i];
    }

    printf("The min number is %.2f\n", min); 
    printf("The max number is %.2f\n", max); 
}

int main() {
    float x = 4.22, y = 2.34, z = 44.5, s = 15;
    min_max_function_2_nmb(x, y); 
    min_max_function_4_nmb(x, y, z, s); 

    return 0;
}

