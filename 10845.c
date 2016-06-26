#include <stdio.h>
int queue[100005];
int b=0;
int f=0;
void push (int a)
{
	queue[f++]=a;
}

int pop (void)
{
	if(empty())
		return -1;
	else
	{
		return queue[b++];
	}
}

int size (void)
{
	return f-b;
}

int empty (void)
{
	if(b==f)
		return 1;
	else
		return 0;
}

int front_func (void)
{
	if(b==f)
		return -1;
	else
	{
		return queue[b];
	}
}

int back_func (void)
{
	if(b==f)
		return -1;
	else
	{
		return queue[f-1];
	}
}

int main(void)
{
	int N,i,num;
	char array[10];
	
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
				else
				{
					printf("%d \n",pop());
				}
				break;
			case 115:
				printf("%d \n",size());
				break;
			case 101:
				printf("%d \n",empty());
				break;
			case 102:
				printf("%d \n",front_func());
				break;
			case 98:
				printf("%d \n",back_func());
				break;			
		}
	}
	
	return 0;
}
