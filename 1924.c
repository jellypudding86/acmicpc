#include <stdio.h>
int main(void)
{
	int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int end[12]={0};
	int x,y,i,temp;
	
	end[1]=day[0];
	for(i=1;i<12;i++)
	{
		end[i+1]=end[i]+day[i];
	}
	
	scanf("%d %d",&x,&y);
	
	for(i=0;i<12;i++)
	{
		if(i+1==x)
		{
			temp=end[i]+y;
		}
	}
	
	if(temp%7==1)
		printf("MON\n");
	else if(temp%7==2)
		printf("TUE\n");
	else if(temp%7==3)
		printf("WED\n");	
	else if(temp%7==4)
		printf("THU\n");
	else if(temp%7==5)
		printf("FRI\n");
	else if(temp%7==6)
		printf("SAT\n");
	else
		printf("SUN\n");
							
	return 0;
	
}
