#include <stdio.h>
int main(void)
{
	char array[9][9];
	int i,j,sum=0;
	
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			scanf("%c",&array[i][j]);
			if(j==7) getchar();
		}
	}

	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			if(array[i][j]=='F')
			{
				if(i%2==0)
				{
					if(j%2==0)
						sum++;
				}
				else
				{
					if(j%2!=0)
						sum++;
				}

			}
		}
	}
	
	printf("%d",sum);
	
	return 0;
}
