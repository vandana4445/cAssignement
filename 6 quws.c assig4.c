6.
#include <stdio.h>

void checkNumber(int num) {
    switch((num > 0) - (num < 0)) {
        case 1: printf("Positive\n"); break;
        case -1: printf("Negative\n"); break;
        case 0: printf("Zero\n"); break;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkNumber(num);
    return 0;
}