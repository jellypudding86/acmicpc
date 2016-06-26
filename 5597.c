#include <stdio.h>
int main(void)
{
	int array[30]={0};
	int n,i,count=0;
	int a[2];
	
	for(i=0;i<28;i++)
	{
		scanf("%d",&n);
		array[n-1]++;
	}
	for(i=0;i<30;i++)
	{
		if(array[i]==0)
		{
			if(count==0)
			{
				a[0]=i;
				count ++;
			}
			else
				a[1]=i;
		}
	}
		printf("%d \n",a[0]+1);
		printf("%d \n",a[1]+1);
	
	return 0;
}
