#include <stdio.h>

int main() {
    int age; //Declear Variable
    
    printf("\n Enter the age: "); //Print Output 
    scanf("%d", &age); //Input From User 
    
    if (age >= 18)  //Condition For if statement
	 { 
        printf("\n You are eligible to vote.\n"); // Print if Condition Is True 
    } else {
        printf("\n You are not eligible to vote.\n"); // Print if Condition Isn False
    }
      
    return 0; // Added a return statement to end the program gracefully
}
