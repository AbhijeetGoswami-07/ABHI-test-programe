#include<stdio.h>

int main()
{
    int num, i, sum = 0;  //Declare The Variable
    
    printf("Enter the number up to which the sum you need: ");
    scanf("%d", &num);  //Input From User 

    for (i = 1; i <= num; ++i) //Condition for For Loop
	{
        sum += i;  //Preform Operation 
    }
    
    printf("Sum of the first %d natural numbers is: %d\n", num, sum);
    
    return 0;
}
