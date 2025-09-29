#include <stdio.h>
int main()
{
	int a,b,p,q,r,s,t;
	printf("Entre The Numbers: ");
	scanf("%d %d",&a,&b);
	
	p=a+b;
	q=a-b;
	r=a*b;
	s=a/b;
	t=a%b;
	
	printf("\n Addition of %d and %d is %d",a,b,p);
	printf("\n Subtraction of %d and %d is %d",a,b,q);
	printf("\n Multipication of %d and %d is %d",a,b,r);
	printf("\n Division of %d and %d is %d",a,b,s);
	printf("\n Remender of %d and %d is %d",a,b,t);
	
	return 0;
}
