#include<stdio.h>
int main()
{
	int i,j,row;
	printf("\n Entre The Value For Star Triangle Pattern: ");
	scanf("%d",&row); //Input From User
	for (i = 1; i <= row; i++) //Condition For Rows In For Loop
	{
		for (j = 1; j <= i; j++) //Conditon For Printing Star In The Rows
		{
			printf("*");
		}
		printf("\n");//Printing Next Row
	}

	
return 0;	
}
