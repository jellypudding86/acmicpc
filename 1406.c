#include <stdio.h>
#include <string.h>

char left[600005];
char right[600005];
char array[600005];
int left_top=-1;
int right_top=-1;
char temp;

void push_left(char a)
{
	left_top++;
	left[left_top]=a;
}

void push_right(char a)
{
	right_top++;
	right[right_top]=a;
}

char pop_left(void)
{
	temp=left[left_top];
	left[left_top--]=' ';
	return temp;
}

char pop_right(void)
{
	temp=right[right_top];
	right[right_top--]=' ';
	return temp;
}

int main(void)
{
	int current,N,i,length;
	scanf("%s",array);
	scanf("%d\n",&N);
	length=strlen(array);
	for(i=0;i<length;i++)
	{
		push_left(array[i]);
	}

	for(i=0;i<N;i++)
	{
		gets(array);
		switch(array[0])
		{
			case 76:
				if(left_top!=-1)
				{
					temp=pop_left();
					push_right(temp);
				}
				break;
			case 68:
				if(right_top!=-1)
				{
					temp=pop_right();
					push_left(temp);	
				}
				break;
			case 66:
				if(left_top!=-1)
				{
					pop_left();	
				}
				break;
			case 80:
				push_left(array[2]);
				break;
			default:
				break;
		}
	}
	
	while(right_top!=-1)
	{
		temp=pop_right();
		push_left(temp);
	}
	
	printf("%s\n",left);

	return 0;
	
}

