#include <stdio.h>
int N,i,temp;
int array[1000005];

int makeone(int n){
	
	if(n==1)
	{
		return 0;
	}
	
	if(array[n]>0)
	{
		return array[n];
	}
	
	array[n]=makeone(n-1)+1;
	
	if(n%2==0)
	{
		temp=makeone(n/2)+1;
		if(temp<array[n])
			array[n]=temp;
	}
	
	if(n%3==0)
	{
		temp=makeone(n/3)+1;
		if(temp<array[n])
			array[n]=temp;
	}
	
	return array[n];
}

int main(void)
{	
	scanf("%d",&N);
	
	printf("%d \n",makeone(N));
	
	return 0;
}
