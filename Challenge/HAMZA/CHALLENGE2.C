#include "MAIN.H"
// Challenge 2: Write a C program that uses a Point structure to represent a point in 2D with x and y coordinates, then calculates and displays the Euclidean distance between two points.

typedef struct {
    float x; 
    float y;
} Point;

float euclidean_function(float a1, float a2, float b1, float b2) {
    float distance = sqrt(pow(a1 - a2, 2) + pow(b1 - b2, 2));
    return distance;
}

void insert(Point* a, Point* b) {
    printf("Enter x of a: " );
    scanf("%f", &(a->x));
    printf("Enter y of a: " );
    scanf("%f", &(a->y));
    printf("Enter x of b: " );
    scanf("%f", &(b->x));
    printf("Enter y of b: " );
    scanf("%f", &(b->y));
}

int main() {
    Point a; 
    Point b;
    insert(&a, &b);
    float euclidean_distance = euclidean_function(a.x, a.y, b.x, b.y); 
    printf("The distance between a and b is %.2f\n", euclidean_distance); 

    return 0;
}
