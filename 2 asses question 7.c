#include <stdio.h>
#define PI 3.14159

int circumferenceOfCircle() {
    // 7. Write a program to calculate the circumference of a circle.
    // Vandana chaturvedi 
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float circumference = 2 * PI * radius;
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}