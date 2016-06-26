#include <stdio.h>
int stack[10001];
int index=-1;
int main(void)
{
	int N,i,num;
	char array[20];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s",array);
		switch(array[0])
		{
		case 112:
			if(array[1]==117) 
			{
				scanf("%d",&num);
				push(num);
			}
			else pop();
			break;
		case 115:
			size();
			break;
		case 101:
			empty();
			break;
		case 116:
			top();
			break;
		default:
			break;
		}
	}
	
	return 0;
}

void push(int a)
{
	index++;
	stack[index]=a;
}

void pop(void)
{
	if(index==-1)
		printf("-1 \n");
	else
	{
		printf("%d \n",stack[index]);
		index--;
	}
}

void size(void)
{
	printf("%d \n",index+1);
}

void empty(void)
{
	if(index==-1) printf("1 \n");
	else printf("0 \n");
}

void top(void)
{
	if(index==-1)
		printf("-1 \n");
	else
		printf("%d \n",stack[index]);
}
