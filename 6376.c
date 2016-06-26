#include <stdio.h>
double array[10];
int factorial(int N)
{
	int i,result=1;
	if(N==0) return 1;
	else
	{
		for(i=1;i<=N;i++)
			result=result*i;
		return result;
	}
}

int main(void)
{
	int i;
	array[0]=1;
	for(i=1;i<10;i++)
	{
		array[i]=array[i-1]+1/(double)factorial(i);
	}
	printf("n e \n");
	printf("- ----------- \n");
	printf("0 %.0lf \n",array[0]);
	printf("1 %.0lf \n",array[1]);
	printf("2 %.1lf \n",array[2]);
	for(i=3;i<10;i++)
	{
		printf("%d %.9lf \n",i,array[i]);
	}
	
	return 0;
}
