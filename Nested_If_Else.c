#include <stdio.h>

int main() {
    int age;
    char gender; // 'char' is the correct type for single characters
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    if (age >= 18) {
        printf("You are eligible to vote.\n");
        
        printf("Please enter your gender (M/F): ");
        scanf(" %c", &gender); // The space before %c is important!
        
        if (gender == 'M' || gender == 'm') {
            printf("Your gender is male.\n");
        } else if (gender == 'F' || gender == 'f') {
            printf("Your gender is female.\n");
        } else {
            printf("Invalid gender entered.\n");
        }
    } else {
        printf("You are not eligible to vote.\n");
    }
    
    return 0;
}
