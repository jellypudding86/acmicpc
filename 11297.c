#include <stdio.h>
int main(void)
{
	int day,month,year,i;
	char array[251];
	
	while(1)
	{
		scanf("%d %d %d",&day,&month,&year);
		if(day==0&&month==0&&year==0)
			break;
		
		day=(day+month+year)%25+1;
		
		getchar();
		gets(array);
		for(i=0;array[i]!='\0';i++)
		{
			if(array[i]>=97&&array[i]<=122)
			{
				array[i]=array[i]-day;
				if(array[i]<97) array[i]=array[i]+26;
			}
		}
		printf("%s \n",array);
	}
	
	return 0;
}
