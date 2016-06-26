#include <stdio.h>
int array[1002][1002];
int maze[1002][1002];
int temp,N,M,i,j;
int move(int a,int b)
{
	if(array[a][b]>=0)
		return array[a][b];
	if(a>N||b>M)
		return 0;

	array[a][b]=move(a+1,b)+maze[a][b];
	temp=move(a,b+1)+maze[a][b];
	
	if(temp>array[a][b]) array[a][b]=temp;
	
	return array[a][b];
}
int main(void)
{
	scanf("%d %d",&N,&M);
	
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			array[i][j]=-1;
			scanf("%d",&maze[i][j]);
		}
	}
	
	printf("%d \n",move(1,1));
	
	return 0;
	
}
