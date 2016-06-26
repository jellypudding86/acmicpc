#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char array[51];
	int finger[8];
	int i;
	
	char one[]={"1QAZ"};
	char two[]={"2WSX"};
	char three[]={"3EDC"};
	char four[]={"4RFV5TGB"};
	char five[]={"6YHN7UJM"};
	char six[]={"8IK,"};
	char seven[]={"9OL."};
	char eight[]={"0P;/-=[]'"};
		
	for(i=0;i<8;i++)
		finger[i]=0;
	
	scanf("%s",array);
	for(i=0;i<strlen(array);i++)
	{
		if(strchr(one,array[i]))
			finger[0]++;
		else if(strchr(two,array[i]))
			finger[1]++;
		else if(strchr(three,array[i]))
			finger[2]++;
		else if(strchr(four,array[i]))
			finger[3]++;			
		else if(strchr(five,array[i]))
			finger[4]++;			
		else if(strchr(six,array[i]))
			finger[5]++;			
		else if(strchr(seven,array[i]))
			finger[6]++;			
		else
			finger[7]++;										
	}
	
	for(i=0;i<8;i++)
		printf("%d \n",finger[i]);
		
	return 0;
	
}
