#include <stdio.h>
typedef struct{
	int weight;
	int height;
	int count;
}BODY;
int main(void)
{
	BODY body[51];
	int N,i,j;
	
	scanf("%d",&N);
	
	for(i=0;i<N;i++)
	{
		scanf("%d %d",&body[i].weight, &body[i].height);
	}

	for(i=0;i<N;i++)
	{
		body[i].count=0;
		for(j=0;j<N;j++)
		{
			if(i!=j)
			{
				if(body[i].weight<body[j].weight)
				{
					if(body[i].height<body[j].height)
						body[i].count++;
				}
			}
		}
		
		printf("%d ",body[i].count+1);
	}
	
	return 0;
}
