#include <stdio.h>

int middleNumberFinder() {
    // 17. Middle Number Finder
    // Vandana chaturvedi 
    int num1, num2, num3;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if ((num1 >= num2 && num1 <= num3) || (num1 <= num2 && num1 >= num3)) {
        printf("Middle number: %d\n", num1);
    } else if ((num2 >= num1 && num2 <= num3) || (num2 <= num1 && num2 >= num3)) {
        printf("Middle number: %d\n", num2);
    } else {
        printf("Middle number: %d\n", num3);
    }
    
    return 0;
}