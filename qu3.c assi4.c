3.
#include <stdio.h>

void checkVowelConsonant(char ch) {
    switch(ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Vowel\n");
            break;
        default:
            printf("Consonant\n");
    }
}

int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    checkVowelConsonant(ch);
    return 0;
}