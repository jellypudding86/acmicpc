#include <stdio.h>
#include <math.h>
int main(void)
{
	int r,w,l,i=1;
	while(1)
	{
		scanf("%d",&r);
		if(r==0) break;		
		scanf("%d %d",&w,&l);
		if(r*2>=sqrt((w*w)+(l*l)))
			printf("Pizza %d fits on the table. \n",i);
		else
			printf("Pizza %d does not fit on the table. \n",i);
		i++;
	}
	return 0;
}
