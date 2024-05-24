#include <stdio.h>

int averageOfThree() {
    // 6. Write a program to calculate the average of three integers. Numbers are given by the user.
    // Vandana chaturvedi 
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    float average = (num1 + num2 + num3) / 3.0;
    printf("Average: %.2f\n", average);

    return 0;
}