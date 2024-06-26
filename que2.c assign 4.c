2.
#include <stdio.h>

void printDaysInMonth(int month) {
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 days\n");
            break;
        case 4: case 6: case 9: case 11:
            printf("30 days\n");
            break;
        case 2:
            printf("28 or 29 days\n");
            break;
        default:
            printf("Invalid month\n");
    }
}

int main() {
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);
    printDaysInMonth(month);
    return 0;
}