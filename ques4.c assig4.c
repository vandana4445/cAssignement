4.
#include <stdio.h>

void findMax(int a, int b) {
    switch(a > b) {
        case 1: printf("Maximum is: %d\n", a); break;
        case 0: printf("Maximum is: %d\n", b); break;
    }
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    findMax(a, b);
    return 0;
}