#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int *student;
	int *apple;
	
	int N,i,each,sum=0;

	scanf("%d",&N);
	
	student=(int)malloc(sizeof(int)*N);
	apple=(int)malloc(sizeof(int)*N);
	
	for(i=0;i<N;i++)
	{
		scanf("%d %d",&student[i],&apple[i]);
		each=apple[i]/student[i];
		sum=sum+(apple[i]-(student[i]*each));
	}
	
	printf("%d \n",sum);
	
	return 0;
}
