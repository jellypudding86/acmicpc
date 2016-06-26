#include <stdio.h>
int main(void)
{
	char color[8];
	int i;
	long long result;
	
	scanf("%s",color);
	switch(color[0])
	{
		case 98:
			if(color[1]==114) //brown
				result = 10;
			else if(color[2]==97) //black
				result = 0;
			else //blue
				result = 60;
			break;
			
		case 103:
			if(color[3]==101) //green
				result = 50;
			else //grey
				result = 80;
			break;
			
		case 114: //red
			result = 20;
			break;
			
		case 111: //orange
			result = 30;
			break;
			
		case 121: //yellow
			result = 40;
			break;
			
		case 118: //violet
			result = 70;
			break;
			
		case 119: //white
			result = 90;
			break;
	}
	
	scanf("%s",color);
	switch(color[0])
	{
		case 98:
			if(color[1]==114) //brown
				result = result + 1;
			else if(color[2]==97) //black
				result = result + 0;
			else //blue
				result = result + 6;
			break;
			
		case 103:
			if(color[3]==101) //green
				result = result + 5;
			else //grey
				result = result + 8;
			break;
			
		case 114: //red
			result = result + 2;
			break;
			
		case 111: //orange
			result = result + 3;
			break;
			
		case 121: //yellow
			result = result + 4;
			break;
			
		case 118: //violet
			result = result + 7;
			break;
			
		case 119: //white
			result = result + 9;
			break;
	}
	
	scanf("%s",color);
	switch(color[0])
	{
		case 98:
			if(color[1]==114) //brown
				result = result * 10;
			else if(color[2]==97) //black
				result = result * 1;
			else //blue
				result = result * 1000000;
			break;
			
		case 103:
			if(color[3]==101) //green
				result = result * 100000;
			else //grey
				result = result * 100000000;
			break;
			
		case 114: //red
			result = result * 100;
			break;
			
		case 111: //orange
			result = result * 1000;
			break;
			
		case 121: //yellow
			result = result * 10000;
			break;
			
		case 118: //violet
			result = result * 10000000;
			break;
			
		case 119: //white
			result = result * 1000000000;
			break;
	}
	
	printf("%lld",result);	
	
	return 0;
}
