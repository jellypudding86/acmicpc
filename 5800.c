#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int K,N,i,j,k;
	int *array;
	int min,max,gap;
	
	scanf("%d",&K);
	for(i=0;i<K;i++)
	{
		max=-1;
		min=101;
		gap=0;
		scanf("%d",&N);
		array=(int*)malloc(N*sizeof(int));
		for(j=0;j<N;j++)
		{
			scanf("%d",&array[j]);
			if(array[j]>max)
				max=array[j];
			if(array[j]<min)
				min=array[j];	
		}

		QuickSort(array,N);
		
		for(j=0;j<N-1;j++)
		{
			if(array[j+1]-array[j]>gap)
				gap=array[j+1]-array[j];	
		}
		
		printf("Class %d \n",i+1);
		printf("Max %d, Min %d, Largest gap %d \n",max,min,gap);

	}
	
	return 0;
}


void QuickSort(int *ar, int num)
{
	int left, right,swap;
	int key;

	if(num <= 1) return;
		key = ar[num-1];

	for(left = 0, right = num-2; ; left++, right--)
	{
		while(ar[left] < key) { left++; }
		while(ar[right] > key) { right--; }
		if(left >= right) 
			break;
		swap=ar[left];
		ar[left]=ar[right];
		ar[right]=swap;	
	}
	
	swap=ar[left];
	ar[left]=ar[num-1];
	ar[num-1]=swap;

	QuickSort(ar, left);
	QuickSort(ar+left+1, num-left-1);
}



