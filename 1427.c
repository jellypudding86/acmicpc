#include <stdio.h>
int main(void)
{
	char array1[11];
	int array2[11];
	int length,i,j,temp;
	
	scanf("%s",array1);
	for(i=0;array1[i]!='\0';i++)
	{
		array2[i]=array1[i]-48;
	}
	length=i;
	for(i=0;i<length;i++)
	{
		for(j=0;j<length-1;j++)
		{
			if(array2[j]<array2[j+1])
			{
				temp=array2[j];
				array2[j]=array2[j+1];
				array2[j+1]=temp;
			}
		}
	}
	for(i=0;i<length;i++)
		printf("%d",array2[i]);
		
	return 0;
}
