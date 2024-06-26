5.
#include <stdio.h>

void checkEvenOdd(int num) {
    switch(num % 2) {
        case 0: printf("Even\n"); break;
        case 1: printf("Odd\n"); break;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkEvenOdd(num);
    return 0;
}