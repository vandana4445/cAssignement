8.
#include <stdio.h>

int sumOfOddNumbers(int n) {
    int sum = 0;
    int i = 1;
    while (i <= n) {
        sum += i;
        i += 2;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of all odd numbers between 1 to %d is %d\n", n, sumOfOddNumbers(n));
    return 0;
}