#include <stdio.h>
int main(void)
{
	char word[101];
	int i;
	int array[26];
	
	for(i=0;i<26;i++)
		array[i]=-1;
	
	scanf("%s",word);
	for(i=0;word[i]!='\0';i++)
	{
		switch(word[i])
		{
			case 97:
				if(array[0]==-1)
					array[0]=i;
				break;
			case 98:
				if(array[1]==-1)	
					array[1]=i;
				break;
			case 99:
				if(array[2]==-1)
					array[2]=i;
				break;
			case 100:
				if(array[3]==-1)
					array[3]=i;
				break;
			case 101:
				if(array[4]==-1)
					array[4]=i;
				break;
			case 102:
				if(array[5]==-1)
					array[5]=i;
				break;
			case 103:
				if(array[6]==-1)
					array[6]=i;
				break;
			case 104:
				if(array[7]==-1)
					array[7]=i;
				break;
			case 105:
				if(array[8]==-1)
					array[8]=i;
				break;
			case 106:
				if(array[9]==-1)
					array[9]=i;
				break;
			case 107:
				if(array[10]==-1)
					array[10]=i;
				break;
			case 108:
				if(array[11]==-1)
					array[11]=i;
				break;
			case 109:
				if(array[12]==-1)
					array[12]=i;
				break;
			case 110:
				if(array[13]==-1)
					array[13]=i;
				break;
			case 111:
				if(array[14]==-1)
					array[14]=i;
				break;
			case 112:
				if(array[15]==-1)
					array[15]=i;
				break;
			case 113:
				if(array[16]==-1)
					array[16]=i;
				break;
			case 114:
				if(array[17]==-1)
					array[17]=i;
				break;
			case 115:
				if(array[18]==-1)
					array[18]=i;
				break;
			case 116:
				if(array[19]==-1)
					array[19]=i;
				break;
			case 117:
				if(array[20]==-1)
					array[20]=i;
				break;
			case 118:
				if(array[21]==-1)
					array[21]=i;
				break;
			case 119:
				if(array[22]==-1)
					array[22]=i;
				break;
			case 120:
				if(array[23]==-1)
					array[23]=i;
				break;
			case 121:
				if(array[24]==-1)
					array[24]=i;
				break;
			case 122:
				if(array[25]==-1)
					array[25]=i;
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
