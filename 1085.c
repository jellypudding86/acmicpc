#include <stdio.h>
int main(void)
{
	int x,y,w,h,min;
	scanf("%d %d %d %d",&x,&y,&w,&h);
	
	min=x;
	if(min>y) min=y;
	if(min>w-x) min=w-x;
	if(min>h-y) min=h-y;
	
	printf("%d \n",min);
	
	return 0;
}
