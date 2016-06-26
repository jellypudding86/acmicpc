#include <stdio.h>
int main(void)
{
	int N,i,j,a,b,c,max,score,index,check;
	int array[7];
	int total[3];
	
	score=0;
	scanf("%d",&N);
	for(j=0;j<N;j++)
	{
		check=0;
		index=0;
		max=0;
		for(i=1;i<=6;i++)
			array[i]=0;
		scanf("%d %d %d",&a,&b,&c);
		array[a]++;
		array[b]++;
		array[c]++;
		
		for(i=1;i<=6;i++)
		{
			if(array[i]>max) 
			{
				max=array[i];
				index=i;
			}
			if(array[i]>=1) check=i;
		}
		
		if(max==3)
		{
			total[j]=10000+index*1000;
		}
		else if(max==2)
		{
			total[j]=1000+index*100;
		}
		else
		{
			total[j]=check*100;
		}
		
		if(total[j]>score) score=total[j];
		
	}

	printf("%d",score);
	
	return 0;
}
