#include <stdio.h>
int array[1000005];
int mid[1000005];
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

int main(void)
{
	int N,i;

	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&array[i]);
	}
	
	QuickSort(array,N);
	
	for(i=0;i<N;i++)
	{
		printf("%d \n",array[i]);
	}
	
	return 0;
}
