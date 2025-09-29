#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    if (num1 > num2) {
        printf("The first number (%d) is greater than the second number (%d).\n", num1, num2);
    } else {
        printf("The second number (%d) is greater than or equal to the first number (%d).\n", num2, num1);
    }

    return 0;
}

