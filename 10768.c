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
	
	scanf("%d",&M); 
	scanf("%d",&D);
	
	for(i=0;i<12;i++)
	{
		if(i+1==M)
		{
			temp=end[i]+D;
		}
	}
	
	if(temp>49)
		printf("After\n");
	else if(temp<49)
		printf("Before\n");
	else
		printf("Special\n");
	
							
	return 0;
	
}
