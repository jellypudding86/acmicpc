#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int A,B,C,result,i,check;
	int count[10];
	char array[10];
	
	for(i=0;i<10;i++)
		count[i]=0;
		
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	
	result=A*B*C;
	sprintf(array,"%d",result);
	
	for(i=0;array[i]!='\0';i++)
	{
		check=array[i]-48;
		switch(check)
		{
			case 0:
				count[0]++;
				break;
			case 1:
				count[1]++;
				break;
			case 2:
				count[2]++;
				break;
			case 3:
				count[3]++;
				break;				
			case 4:
				count[4]++;
				break;				
			case 5:
				count[5]++;
				break;				
			case 6:
				count[6]++;
				break;				
			case 7:
				count[7]++;
				break;				
			case 8:
				count[8]++;
				break;				
			case 9:
				count[9]++;
				break;	
			default:
				break;												
		}
	}
	
	for(i=0;i<10;i++)
		printf("%d \n",count[i]);
	
	return 0;
}
