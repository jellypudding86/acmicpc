#include <stdio.h>
int main(void)
{
	int array[9][9];
	int i, j, order_1, order_2, max=0;
	
	for(i=0;i<9;i++)
	{
			scanf("%d %d %d %d %d %d %d %d %d",&array[i][0], &array[i][1], &array[i][2], &array[i][3], &array[i][4], &array[i][5], &array[i][6], &array[i][7], &array[i][8]);
			for(j=0;j<9;j++)
			{
				if(array[i][j]>max)
				{
					max=array[i][j];
					order_1=i+1;
					order_2=j+1;
				
				}
			}	
	}
	
	printf("%d \n",max);
	printf("%d %d\n",order_1,order_2);
	
	return 0;
}
