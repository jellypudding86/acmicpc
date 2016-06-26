#include <stdio.h>
int arrayA[11];
int arrayB[11];
int main(void)
{
	int i,countA=0,countB=0,indexA=0,indexB=0;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&arrayA[i]);
	}
	for(i=1;i<=10;i++)
	{
		scanf("%d",&arrayB[i]);
	}
	for(i=1;i<=10;i++)
	{
		if(arrayA[i]>arrayB[i]) 
		{
			countA=countA+3;
			indexA=i;	
		}
		else if(arrayA[i]<arrayB[i]) 
		{
			countB=countB+3;
			indexB=i;	
		}
		else
		{
			countA++;
			countB++;
		}	
	}	
	if(countA>countB)
	{
		printf("%d %d \n",countA,countB);
		printf("A \n");	
	}	
	else if(countA<countB)
	{
		printf("%d %d \n",countA,countB);
		printf("B \n");
	}
	else
	{
		if(indexA>indexB)
		{
			printf("%d %d \n",countA,countB);
			printf("A \n");				
		}
		else if(indexA<indexB)
		{
			printf("%d %d \n",countA,countB);
			printf("B \n");			
		}
		else
		{
			printf("%d %d \n",countA,countB);
			printf("D \n");
		}
	}
	
	return 0;
}
