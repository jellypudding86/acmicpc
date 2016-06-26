#include <stdio.h>
int array[1001];
int main(void)
{
	int N,i,j,k=1,A,B,sum=0;
	
	while(1)
	{
		for(i=1;i<=1000;i++)
		{
			for(j=1;j<=i;j++)
			{
				array[k]=i;
				k++;
				if(k>1000)
					break;				
			}
			if(k>1000)
				break;
		}
		if(k>1000)
			break;
	}
	scanf("%d %d",&A,&B);
	for(i=A;i<=B;i++)
	{
		sum=sum+array[i];
	}
	
	printf("%d \n",sum);
	
	return 0;
}
