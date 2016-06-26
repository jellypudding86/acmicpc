#include <stdio.h>
int main(void)
{
	int T,i,j,Y,K;
	int Y_total=0;
	int K_total=0;
	
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		for(j=0;j<9;j++)
		{
			scanf("%d %d",&Y,&K);
			Y_total=Y_total+Y;
			K_total=K_total+K;
		}
	
	if(Y_total>K_total)
		printf("Yonsei \n");
	else if(Y_total<K_total)
		printf("Korea \n");
	else
		printf("Draw \n");
		
	}
}
