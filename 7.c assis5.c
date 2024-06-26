4.
#include <stdio.h>

void printEvenNumbers() {
    int i = 2;
    while (i <= 100) {
        printf("%d\n", i);
        i += 2;
    }
}

int main() {
    printEvenNumbers();
    return 0;
}6.
#include <stdio.h>

int sumOfNaturalNumbers(int n) {
    int sum = 0;
    int i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of all natural numbers between 1 to %d is %d\n", n, sumOfNaturalNumbers(n));
    return 0;
}