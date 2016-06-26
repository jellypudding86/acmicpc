#include <stdio.h>
int main(void)
{
	int N,i;
	char array[31];
	
	scanf("%d",&N);
	getchar();
	for(i=0;i<N;i++)
	{
		gets(array);
		if(array[0]>95)
			array[0]=array[0]-32;
		printf("%s \n",array);
	}
	
	return 0;
	
}
