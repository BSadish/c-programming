#include <stdio.h>

int main() {
    int n;
    int num1, num2, num3, smallest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n >= 1) {
        printf("Enter the first number: ");
        scanf("%d", &num1);
        smallest = num1;
    }

    if (n >= 2) {
        printf("Enter the second number: ");
        scanf("%d", &num2);
        if (num2 < smallest) {
            smallest = num2;
        }
    }

    if (n == 3) {
        printf("Enter the third number: ");
        scanf("%d", &num3);
        if (num3 < smallest) {
            smallest = num3;
        }
    }

    printf("The smallest number is: %d\n", smallest);

    return 0;
}

