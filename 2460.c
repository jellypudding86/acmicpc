#include <stdio.h>
int main(void)
{
	int a,b,i,max=0;
	int array[10];
	array[0]=0;
	
	for(i=0;i<10;i++)
	{
		scanf("%d %d",&a,&b);
		if(i==0)
			array[i]=b;
		else
			array[i]=array[i-1]-a+b;
		if(array[i]>max)
			max=array[i];
	}
	
	printf("%d \n",max);
	
	return 0;
}
