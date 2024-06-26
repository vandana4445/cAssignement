7.
#include <stdio.h>
#include <math.h>

void findRoots(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    double root1, root2;

    switch((discriminant > 0) - (discriminant < 0)) {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and different.\n");
            printf("Root 1 = %.2lf\nRoot 2 = %.2lf\n", root1, root2);
            break;
        case 0:
            root1 = -b / (2 * a);
            printf("Roots are real and same.\n");
            printf("Root 1 = Root 2 = %.2lf\n", root1);
            break;
        case -1:
            double realPart = -b / (2 * a);
            double imaginaryPart = sqrt(-discriminant) / (2 * a);
            printf("Roots are complex and different.\n");
            printf("Root 1 = %.2lf + %.2lfi\nRoot 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
            break;
    }
}

int main() {
    double a, b, c;
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    findRoots(a, b, c);
    return 0;
}