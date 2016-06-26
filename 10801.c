#include <stdio.h>
int a[10];
int b[10];
int main(void)
{
	int ascore=0, bscore=0;
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		scanf("%d",&b[i]);
		if(a[i]>b[i])
			ascore++;
		else if(a[i]<b[i])
			bscore++;
	}
	
	if(ascore>bscore)
		printf("A \n");
	else if(ascore<bscore)
		printf("B \n");
	else
		printf("D \n");
		
	return 0;	
}
