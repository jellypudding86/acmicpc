#include <stdio.h>
int main(void)
{
	int A,B,C;
	
	scanf("%d %d %d",&A,&B,&C);

	if(A+B+C==180)
	{
		if(A==60&&B==60&&C==60)
			printf("Equilateral \n");
		else if(A==B)
			printf("Isosceles \n");
		else if(B==C)
			printf("Isosceles \n");
		else if(A==C)
			printf("Isosceles \n");
		else
			printf("Scalene \n");
	}
	else
	{
		printf("Error \n");
	}
	
	return 0;
}
