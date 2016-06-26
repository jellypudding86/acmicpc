#include <stdio.h>
int main(void)
{
	int N,i,check=0;
	char array1[1001];
	char array2[1001];
	
	scanf("%d",&N);
	scanf("%s",array1);
	scanf("%s",array2);
	if(N%2==0)
	{
		for(i=0;array1[i]!='\0';i++)
		{
			if(array1[i]!=array2[i])
				check=1;
		}
		
		if(check==1)
			printf("Deletion failed \n");
		else
			printf("Deletion succeeded \n");
	}
	else
	{
		for(i=0;array1[i]!='\0';i++)
		{
			if(array1[i]==array2[i])
				check=1;
		}
		
		if(check==1)
			printf("Deletion failed \n");
		else
			printf("Deletion succeeded \n");
	}
	
	return 0;
}
