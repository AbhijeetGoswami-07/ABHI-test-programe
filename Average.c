#include<stdio.h>
int main()
{
	int num1,num2,num3,avg;
	printf(" Entre The First Intger:" );
	
	scanf(" %d",&num1);//Input Of Frist Number 
	
	printf("Entre The Second Intger:");
	
	scanf(" %d",&num2);//Input of Second Number 
	
	printf(" Entre The Third Integer:");
	
	scanf(" %d",&num3);//Input for Thrid Number 
	
	avg=(num1+num2+num3)/3;//Operation Perform From Given Input 
	
	printf("The Average Of %d,%d And %d Is %d ",num1,num2,num3,avg);
	
	return 0;
}
