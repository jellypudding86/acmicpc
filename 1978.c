#include <stdio.h>
#include <stdlib.h>
int IsPrime(int num){
    int i, cnt = 0;
 
    for (i = 2; i <= num; i++){
        if (num%i == 0)
            cnt++;
    }
    if (cnt == 1)
        return 1;
    else
        return 0;
}

int main(void)
{
	int N,i,num,count=0;
	int *array;
	
	scanf("%d",&N);
	array=(int*)malloc(N*sizeof(int));
	for(i=0;i<N;i++)
	{
		scanf("%d",&array[i]);
		if(array[i]==1)
		{}	
		else if(IsPrime(array[i])==1)
			count ++;
	}
	
	printf("%d \n",count);
	return 0;
}
