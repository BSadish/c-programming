
#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number >= 0) {
        printf("The number is positive.\n");
        if (number % 2 == 0) {
            printf("It is also an even number.\n");
        } else {
            printf("It is also an odd number.\n");
        }
    } else {
        printf("The number is negative.\n");
    }

    return 0;
}
