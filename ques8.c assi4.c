8.
#include <stdio.h>

void simpleCalculator(char operator, double a, double b) {
    switch(operator) {
        case '+': printf("%.2lf + %.2lf = %.2lf\n", a, b, a + b); break;
        case '-': printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b); break;
        case '*': printf("%.2lf * %.2lf = %.2lf\n", a, b, a * b); break;
        case '/': 
            if(b != 0)
                printf("%.2lf / %.2lf = %.2lf\n", a, b, a / b);
            else
                printf("Division by zero error!\n");
            break;
        default: printf("Invalid operator\n");
    }
}

int main() {
    char operator;
    double a, b;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &a, &b);
    simpleCalculator(operator, a, b);
    return 0;
}