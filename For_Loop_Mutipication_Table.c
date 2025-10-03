#include<stdio.h>
void main()
{int num,i;  // Declare Variable 
printf("Entre The Number For Multipication Table:");
scanf("%d",&num);  //Input From User
printf("\nMultipication Table of %d Is:\n",num);
for(i=1; i <= 10; i++) //Condition For Loop
{	
	printf("%d * %d = %d \n",num, i, num * i); //Preform Operstion And Print Output 
}

}
