#include <stdio.h>
int main(void)
{
	int i;
	int hour1,min1,sec1;
	int hour2,min2,sec2;
	int hour3,min3,sec3;	

	for(i=0;i<3;i++)
	{
		scanf("%d %d %d",&hour1,&min1,&sec1);
		scanf("%d %d %d",&hour2,&min2,&sec2);
		
		if(sec1<=sec2) sec3=sec2-sec1;
		else 
		{
			sec3=60-sec1+sec2;
			min2--;
		}
		
		if(min1<=min2) min3=min2-min1;
		else 
		{
			min3=60-min1+min2;
			hour2--;
		}	
	
		if(hour1<=hour2) hour3=hour2-hour1;
		else hour3=24-hour1+hour2;
	
		printf("%d %d %d \n",hour3,min3,sec3);
	}
	return 0;		
}
