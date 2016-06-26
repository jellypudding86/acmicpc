#include <stdio.h>
#include <string.h>
char array[100001];
int stack[100001];
int index=-1;
int main(void)
{
	int length,i;
	int total=0;
	scanf("%s",array);
	length=strlen(array);
	for(i=0;i<length;i++)
	{
		if(array[i]==40)
		{	
			push(i);
		}
		else
		{
			if(i==pop()+1)
			{
				total=total+size();
			}
			else
			{
				total=total+1;
			}
		}
	}
	
	printf("%d \n",total);
	return 0;
}

void push(int a)
{
	index++;
	stack[index]=a;
}

int pop(void)
{
	return stack[index--];
}

int size(void)
{
	if(index==-1)
	{
		return 0;
	}
	else
	{
		return index+1;
	}
}
