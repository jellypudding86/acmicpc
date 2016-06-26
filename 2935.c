#include <stdio.h>
#include <string.h>
char A[102];
char B[102];
int main(void)
{
	char operand;
	int a,b,i,temp;
	
	scanf("%s",A);
	getchar();
	scanf("%c",&operand);
	scanf("%s",B);

	a=strlen(A);
	b=strlen(B);

	if(b>a) 
	{
		temp=b;
		b=a;
		a=temp;
	}
	
	switch(operand)
	{
		case 42:
			printf("1");
			for(i=0;i<a+b-2;i++)
				printf("0");
			break;
		case 43:
			if(a==b)
			{
				printf("2");
				for(i=0;i<a-1;i++)
					printf("0");
			}
			else
			{
				printf("1");
				for(i=0;i<a-b-1;i++)
					printf("0");
				printf("1");
				for(i=0;i<b-1;i++)
					printf("0");
			}
			break;
		default:
			break;
	}

	return 0;
	
}
