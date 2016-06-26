#include <stdio.h>
#include <stdlib.h>
#define MAX 1000001
int main(void)
{
	
	int i,max=0,check=0,result;
	int count[26]={0};
	char *array;
	array=malloc(sizeof(int)*MAX);
	scanf("%s",array);
	for(i=0;array[i]!='\0';i++)
	{
		if(array[i]>90)
			array[i]=array[i]-32;
		switch(array[i])
		{
			case 65:
				count[0]++;
				break;
			case 66:
				count[1]++;
				break;	
			case 67:
				count[2]++;
				break;
			case 68:
				count[3]++;
				break;
			case 69:
				count[4]++;
				break;			
			case 70:
				count[5]++;
				break;			
			case 71:
				count[6]++;
				break;
			case 72:
				count[7]++;
				break;
			case 73:
				count[8]++;
				break;
			case 74:
				count[9]++;
				break;																	
			case 75:
				count[10]++;
				break;
			case 76:
				count[11]++;
				break;
			case 77:
				count[12]++;
				break;
			case 78:
				count[13]++;
				break;
			case 79:
				count[14]++;
				break;
			case 80:
				count[15]++;
				break;				
			case 81:
				count[16]++;
				break;				
			case 82:
				count[17]++;
				break;				
			case 83:
				count[18]++;
				break;				
			case 84:
				count[19]++;
				break;				
			case 85:
				count[20]++;
				break;				
			case 86:
				count[21]++;
				break;				
			case 87:
				count[22]++;
				break;				
			case 88:
				count[23]++;
				break;				
			case 89:
				count[24]++;
				break;
			case 90:
				count[25]++;
				break;								
			default:
				break;			
		}
	}
		
	for(i=0;i<26;i++)
	{
		if(count[i]>max)
			max=count[i];
	}

	for(i=0;i<26;i++)
	{
		if(count[i]==max)
		{
			result=i;
			check++;
		}
	}
	
	if(check>1)
		printf("? \n");
		
	else
	{
		printf("%c \n",result+65);
	}
	
	free(array);
	
	return 0;
}
