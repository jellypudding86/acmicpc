#include <stdio.h>
int main(void)
{
	int T,i,j,a,b;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d %d",&a,&b);
		switch(a%10)
		{
			case 1:
				printf("1 \n");
				break;
			case 2:
				if(b%4==0)
					printf("6 \n");
				else if(b%4==1)
					printf("2 \n");
				else if(b%4==2)
					printf("4 \n");
				else
					printf("8 \n");
				break;
			case 3:
				if(b%4==0)
					printf("1 \n");
				else if(b%4==1)
					printf("3 \n");
				else if(b%4==2)
					printf("9 \n");
				else
					printf("7 \n");
				break;
			case 4:
				if(b%2==0)
					printf("6 \n");
				else
					printf("4 \n");
				break;
			case 5:
				printf("5 \n");
				break;
			case 6:
				printf("6 \n");
				break;
			case 7:
				if(b%4==0)
					printf("1 \n");
				else if(b%4==1)
					printf("7 \n");
				else if(b%4==2)
					printf("9 \n");
				else
					printf("3 \n");
				break;								
			case 8:
				if(b%4==0)
					printf("6 \n");
				else if(b%4==1)
					printf("8 \n");
				else if(b%4==2)
					printf("4 \n");
				else
					printf("2 \n");
				break;
			case 9:
				if(b%2==0)
					printf("1 \n");
				else
					printf("9 \n");
				break;
			case 0:
				printf("10 \n");
				break;
			default:
				break;													
		}
	}
	
	return 0;
}
