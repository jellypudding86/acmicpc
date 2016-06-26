#include <stdio.h>
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
	int N,i,sum=0;
	int array[1001];
	int mid[1001];
	
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&array[i]);
	}
	
	QuickSort(array,N);
	
	mid[0]=array[0];
	for(i=0;i<N;i++)
	{
		mid[i]=mid[i-1]+array[i];
		sum=sum+mid[i];
	}
	printf("%d \n",sum);
	
	return 0;
}
