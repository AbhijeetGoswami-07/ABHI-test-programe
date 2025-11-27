#include <stdio.h>

int main() {
    int persons;
    float amount;

    printf("Enter number of persons in the group: ");
    scanf("%d", &persons);

    if (persons == 1) {
        amount = 200;
    }
    else if (persons == 2) {
        amount = 300;
    }
    else if (persons == 4) {
        amount = 500;
    }
    else if (persons > 4) {
        // Base rate for 4 persons = 500
        // Extra persons pay 200 each, then 5% discount on total
        amount = 500 + (persons - 4) * 200;
        amount = amount - (amount * 0.05);  // 5% discount
    }
    else {
        printf("Invalid number of persons!\n");
        return 0;
    }

    printf("Total ticket amount = Rs. %.2f\n", amount);

    return 0;
}

