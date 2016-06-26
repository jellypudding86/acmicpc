#include <stdio.h>
int array[15][15];
int main(void)
{
	int n,i,j,k,a,b;
	for(i=1;i<=14;i++)
	{
		array[0][i]=i;
	}
	for(i=1;i<=14;i++)
	{
		for(j=1;j<=14;j++)
		{
			for(k=1;k<=j;k++)
			{
				array[i][j]=array[i][j]+array[i-1][k];
			}
		}
	}
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		printf("%d \n",array[a][b]);
	}
	
	return 0;
}
