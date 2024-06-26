2.
#include <stdio.h>

void printReverseNaturalNumbers(int n) {
    while (n >= 1) {
        printf("%d\n", n);
        n--;
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printReverseNaturalNumbers(n);
    return 0;
}