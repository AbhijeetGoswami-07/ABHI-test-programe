#include <stdio.h>
#include <stdlib.h> // Required for the exit() function

int main() {
    int a, b, ch, c;

    do {
        printf("\n MENU");
        printf("\n 1. ADDITION");
        printf("\n 2. SUBTRACTION");
        printf("\n 3. MULTIPLICATION");
        printf("\n 4. DIVISION");
        printf("\n 5. REMAINDER");
        printf("\n 6. EXIT");

        printf("\n\n ENTER YOUR CHOICE: ");
        scanf(" %d", &ch);

        // Get numbers only if the user doesn't choose to exit
        if (ch != 6) {
            printf("ENTER FIRST INTEGER: ");
            scanf("%d", &a);
            printf("ENTER SECOND INTEGER: ");
            scanf("%d", &b);
        }

        switch (ch) {
            case 1:
                c = a + b;
                printf("\n ADDITION IS %d\n", c);
                break;
            case 2:
                c = a - b;
                printf("\n SUBTRACTION IS %d\n", c);
                break;
            case 3:
                c = a * b;
                printf("\n MULTIPLICATION IS %d\n", c);
                break;
            case 4:
                // Check for division by zero
                if (b == 0) {
                    printf("\n ERROR: Cannot divide by zero!\n");
                } else {
                    c = a / b;
                    printf("\n DIVISION IS %d\n", c);
                }
                break;
            case 5:
                // Check for remainder with zero
                if (b == 0) {
                    printf("\n ERROR: Cannot find remainder with zero!\n");
                } else {
                    c = a % b;
                    printf("\n REMAINDER IS %d\n", c);
                }
                break;
            case 6:
                printf("\n Exiting the program. Goodbye!\n");
                exit(0);
            default:
                printf("\n INVALID CHOICE! Please select a number from 1 to 6.\n");
        }
    } while (ch != 6);

    return 0; // It's good practice to return 0 from main()
}
