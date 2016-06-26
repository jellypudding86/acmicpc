#include <stdio.h>
int main(void)
{
	int n,i;
	int x,y;
	int q1=0,q2=0,q3=0,q4=0,axis=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&x,&y);
		if(x==0||y==0)
			axis++;
		else if(x>0)
		{
			if(y>0) q1++;
			else q4++;
		}
		else
		{
			if(y>0) q2++;
			else q3++;
		}
	}
	
	printf("Q1: %d \n",q1);
	printf("Q2: %d \n",q2);
	printf("Q3: %d \n",q3);
	printf("Q4: %d \n",q4);
	printf("AXIS: %d \n",axis);
	
	return 0;
}
