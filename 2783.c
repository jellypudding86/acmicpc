#include <stdio.h>
int array[101];
int main(void)
{
	int N,i;
	float a,b,min,temp;
	scanf ("%f %f",&a,&b);
	min=a/b*1000;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%f %f",&a,&b);
		temp=a/b*1000;
		if(temp<min) min=temp;
	}
	
	printf("%.2f \n",min);
	
	return 0;
}
