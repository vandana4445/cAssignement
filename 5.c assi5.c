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
}