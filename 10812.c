#include<stdio.h>
int array[101];
int temp[101];
int main(void)
{
	int i,j,N,M,begin,end,mid,pos;
	scanf("%d %d",&N,&M);
	for(i=1;i<=N;i++)
	{
		array[i]=i;
	}
	for(i=0;i<M;i++)
	{
		scanf("%d %d %d",&begin,&end,&mid);
		for(j=begin;j<=end;j++)
		{
			temp[j]=array[j];
		}
		pos=begin;
		for(j=mid;j<=end;j++)
		{
			array[pos]=temp[j];
			pos++;
		}
		pos=end;
		for(j=mid-1;j>=begin;j--)
		{
			array[pos]=temp[j];
			pos--;
		}
	}
	
	for(i=1;i<=N;i++)
	{
		printf("%d ",array[i]);
	}
	
	return 0;
	
}
