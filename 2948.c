#include <stdio.h>
int main(void)
{
	int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int end[12]={0};
	int M,D,i,temp;
	
	end[1]=day[0];
	for(i=1;i<12;i++)
	{
		end[i+1]=end[i]+day[i];
	}
	
	scanf("%d %d",&D,&M);
	
	for(i=0;i<12;i++)
	{
		if(i+1==M)
		{
			temp=end[i]+D;
		}
	}
	
	if(temp%7==1)
		printf("Thursday\n");
	else if(temp%7==2)
		printf("Friday\n");
	else if(temp%7==3)
		printf("Saturday\n");	
	else if(temp%7==4)
		printf("Sunday\n");
	else if(temp%7==5)
		printf("Monday\n");
	else if(temp%7==6)
		printf("Tuesday\n");
	else
		printf("Wednesday\n");
							
	return 0;
	
}
