#include <stdio.h>
int array[21]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int main(void)
{
	int i,k,a,b,temp,term,change;
	for(i=0;i<10;i++)
	{
		scanf("%d %d",&a,&b);
		term=(a+b)/2;
		change=b;
		k=a;
		while(k<=term)
		{
			temp=array[k];
			array[k]=array[change];
			array[change]=temp;
			change--;
			k++;
		}		
	}	
	for(i=1;i<=20;i++)
	{
		printf("%d ",array[i]);
	}
	
	return 0;
}
