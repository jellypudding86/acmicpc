#include <stdio.h>
int main(void)
{
	char word[1001];
	int alpha[26]={65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90};
	int check[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	
	int T,i,j,sum;
	
	scanf("%d",&T);
	for(j=0;j<T;j++)
	{
		sum=0;
		for(i=0;i<26;i++)
			check[i]=0;

		scanf("%s",word);
	
		for(i=0;word[i]!='\0';i++)
		{
			switch(word[i])
			{
			case 65:
				check[0]++;
				break;
			case 66:
				check[1]++;
				break;
			case 67:
				check[2]++;
				break;			
			case 68:
				check[3]++;
				break;			
			case 69:
				check[4]++;
				break;			
			case 70:
				check[5]++;
				break;
			case 71:
				check[6]++;
				break;
			case 72:
				check[7]++;
				break;			
			case 73:
				check[8]++;
				break;			
			case 74:
				check[9]++;
				break;
			case 75:
				check[10]++;
				break;
			case 76:
				check[11]++;
				break;
			case 77:
				check[12]++;
				break;			
			case 78:
				check[13]++;
				break;			
			case 79:
				check[14]++;	
				break;						
			case 80:
				check[15]++;
				break;
			case 81:
				check[16]++;
				break;
			case 82:
				check[17]++;
				break;			
			case 83:
				check[18]++;
				break;			
			case 84:
				check[19]++;
				break;						
			case 85:
				check[20]++;
				break;			
			case 86:
				check[21]++;
				break;			
			case 87:
				check[22]++;
				break;						
			case 88:
				check[23]++;
				break;			
			case 89:
				check[24]++;
				break;			
			case 90:
				check[25]++;
				break;			
			
			}								
		}
		
		for(i=0;i<26;i++)
		{
			if(check[i]==0)
				sum=sum+alpha[i];
		}
		
		printf("%d \n",sum);
	}
	return 0;
}
