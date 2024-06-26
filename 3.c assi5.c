3.
#include <stdio.h>

void printAlphabets() {
    char ch = 'a';
    while (ch <= 'z') {
        printf("%c\n", ch);
        ch++;
    }
}

int main() {
    printAlphabets();
    return 0;
}