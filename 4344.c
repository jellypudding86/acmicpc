#include <stdio.h>
int array[1001];
double round(double value, int pos)
{
	double temp;
	temp = value*pow(10,pos);
	temp=floor(temp+0.5);
	temp*=pow(10,-pos);
	return temp;
}
int main(void)
{
	int C,N,i,j,total;
	double sum;
	scanf("%d",&C);
	for(j=0;j<C;j++)
	{
		sum=0;
		total=0;
		scanf("%d",&N);
		for(i=0;i<N;i++)
		{
			scanf("%d",&array[i]);
			sum=sum+array[i];
		}
		sum=sum/N;
		for(i=0;i<N;i++)
		{
			if(array[i]>sum)
			{
				total++;
				
			}
		}
		sum=(double)total/(double)N*100;
		sum=round(sum,3);
		printf("%.3lf%% \n",sum);		
	}
	return 0;
}
