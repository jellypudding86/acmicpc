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
	int T,i;
	double num;
	char array[5];
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%lf %s",&num,array);
		switch(array[0])
		{
			case 107:
				num=num*2.2046;
				num=round(num, 4);
				printf("%.4lf lb \n",num);
				break;
			case 108:
				if(array[1]=='b')
				{
					num=num*0.4536;
					num=round(num, 4);
					printf("%.4lf kg \n",num);
				}
				else
				{
					num=num*0.2642;
					num=round(num, 4);
					printf("%.4lf g \n",num);
				}
				break;
			case 103:
				num=num*3.7854;
				num=round(num, 4);
				printf("%.4lf l \n",num);	
				break;
			default:
				break;
		}
	}
	
	return 0;
}
