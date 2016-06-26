#include <stdio.h>
int main(void)
{
	int array[26]={0};
	char word[101];
	int i;
	
	scanf("%s",word);
	for(i=0;word[i]!='\0';i++)
	{
		switch(word[i])
		{
			case 97:
				array[0]++;
				break;
			case 98:
				array[1]++;
				break;
			case 99:
				array[2]++;
				break;
			case 100:
				array[3]++;
				break;
			case 101:
				array[4]++;
				break;
			case 102:
				array[5]++;
				break;
			case 103:
				array[6]++;
				break;
			case 104:
				array[7]++;
				break;
			case 105:
				array[8]++;
				break;
			case 106:
				array[9]++;
				break;
			case 107:
				array[10]++;
				break;
			case 108:
				array[11]++;
				break;
			case 109:
				array[12]++;
				break;
			case 110:
				array[13]++;
				break;
			case 111:
				array[14]++;
				break;
			case 112:
				array[15]++;
				break;
			case 113:
				array[16]++;
				break;
			case 114:
				array[17]++;
				break;
			case 115:
				array[18]++;
				break;
			case 116:
				array[19]++;
				break;
			case 117:
				array[20]++;
				break;
			case 118:
				array[21]++;
				break;
			case 119:
				array[22]++;
				break;
			case 120:
				array[23]++;
				break;
			case 121:
				array[24]++;
				break;
			case 122:
				array[25]++;
				break;
			default:
				break;		
		}
	}
	
	for(i=0;i<26;i++)
		printf("%d ",array[i]);
		
	printf("\n");
	
	return 0;
}
