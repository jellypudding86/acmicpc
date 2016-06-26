#include <stdio.h>
int main(void)
{
	int array[26];
	char string[151];
	int i,N,check=0;
	
	for(i=0;i<26;i++)
		array[i]=0;
		
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s",string);
		array[string[0]-97]++;	
	}
	
	for(i=0;i<26;i++)
	{
		if(array[i]>=5)
		{
			printf("%c",i+97);
			check=1;
		}
	}
	
	if(check==0) printf("PREDAJA \n");
	
	return 0;
}
