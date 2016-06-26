#include <stdio.h>
int main(void)
{
	char array[41];
	int P,i,j;
	int result[8];
	
	scanf("%d",&P);
	for(j=0;j<P;j++)
	{
		for(i=0;i<8;i++)
			result[i]=0;	
		scanf("%s",array);
		for(i=0;i<38;i++)
		{
			if(array[i]=='H')
			{
				if(array[i+1]=='H')
				{
					if(array[i+2]=='T')
						result[6]++;
					else
						result[7]++;					
				}
				else if(array[i+1]=='T')
				{
					if(array[i+2]=='T')
						result[4]++;
					else
						result[5]++;					
				}
			}
			else
			{
				if(array[i+1]=='H')
				{
					if(array[i+2]=='T')
						result[2]++;
					else
						result[3]++;					
				}
				else if(array[i+1]=='T')
				{
					if(array[i+2]=='T')
						result[0]++;
					else
						result[1]++;					
				}
			}			
			
		}
		for(i=0;i<8;i++)
			printf("%d ",result[i]);
		printf("\n");
	}
	
	return 0;
}
