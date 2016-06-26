#include <stdio.h>
int stack[100001];
int index=-1;
long long sum;
void push(int a)
{
	index++;
	stack[index]=a;
}

void pop(void)
{
		stack[index]=0;
		index--;
}

int main(void)
{
	int K,i,temp;
	scanf("%d",&K);
	for(i=0;i<K;i++)
	{
		scanf("%d",&temp);
		if(temp==0)
		{
			pop();
		}
		else
		{
			push(temp);
		}
	}
	for(i=0;i<K;i++)
	{
		sum=sum+stack[i];
	}
	printf("%lld \n",sum);
	
	return 0;
}

