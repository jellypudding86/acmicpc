#include <stdio.h>

double round(double value, int pos)
{
	double temp;
	temp = value*pow(10,pos);
	temp=floor(temp+0.5);
	temp*=pow(10,-pos);
	return temp;
}

int main(void)
{
	int i,N,num,total=0;
	double sum=0;
	double result;
	char array1[101];
	char array2[4];
	
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s %d %s",array1,&num,array2);
		
		total=total+num;
		
		switch(array2[0])
		{
		case 'A':
			if(array2[1]=='+')
				sum=sum+num*4.3;
			else if(array2[1]=='0')
				sum=sum+num*4.0;
			else
				sum=sum+num*3.7;
			break;
		
		case 'B':
			if(array2[1]=='+')
				sum=sum+num*3.3;
			else if(array2[1]=='0')
				sum=sum+num*3.0;
			else
				sum=sum+num*2.7;
			break;
	
		case 'C':
			if(array2[1]=='+')
				sum=sum+num*2.3;
			else if(array2[1]=='0')
				sum=sum+num*2.0;
			else
				sum=sum+num*1.7;
			break;
	
		case 'D':
			if(array2[1]=='+')
				sum=sum+num*1.3;
			else if(array2[1]=='0')
				sum=sum+num*1.0;
			else
				sum=sum+num*0.7;
			break;
		
		case 'F':
			sum=sum;
			break;
			
		default:
			break;	
		}
	}
	
	result = sum/total;

	printf("%.02lf \n",round(result,2));
	
	return 0;
}

