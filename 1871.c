#include <stdio.h>
int main(void)
{
	char array[9];
	int T,i,sum,num,result;
	
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%s",array);
		sum=(array[0]-65)*26*26+(array[1]-65)*26+array[2]-65;
		num=(array[4]-48)*1000+(array[5]-48)*100+(array[6]-48)*10+array[7]-48;

		if(sum>=num) result=sum-num;
		else result=num-sum;
		
		if(result<=100)
			printf("nice \n");
		else
			printf("not nice \n");
	}
	
	return 0;
}
