#include <stdio.h>

int main() {
	int marks;
	printf("\n entre your marks:");
	scanf("\n %d",&marks);
	if (marks>=90&&marks<=100){
		printf("\n your got A+ Grade ");
		
	}
	else if (marks>=80 && marks<90){
		printf ("\n you got A Grade ");
		
	}
	else if (marks >=70 && marks<80){
		printf("\n you got C Greade ");
		
	}
	else {
		printf("\n you just pass ");
	}

	return 0;
}
