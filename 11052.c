#include <stdio.h>
int price[1005];
int sell[1005];
int main(void)
{
	int N,i,j,temp;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		scanf("%d",&price[i]);
		sell[i]=0;
	}
	
    for (i=1;i<=N;i++) 
	{
        for (j=1;j<=i;j++) 
		{
            if (sell[i] < sell[i-j] + price[j])
                sell[i] = sell[i-j] + price[j];
        }
    }
    
	printf("%d \n",sell[N]);
}
