#include <stdio.h>
int main(void)
{
	int num;
	int i,j,count;
	scanf("%d",&num);
	j=num;
	count=0;

	do
	{
		i=(j/10) + (j%10);
		j=(j%10*10) + (i%10);
		count ++;		
	}while(j!=num);
	
	printf ("%d \n",count);
	
	return 0;
}
