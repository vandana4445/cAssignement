1.
#include <stdio.h>

void printNaturalNumbers(int n) {
    int i = 1;
    while (i <= n) {
        printf("%d\n", i);
        i++;
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printNaturalNumbers(n);
    return 0;
}