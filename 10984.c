#include <stdio.h>
double round(double value, int pos)
{
	double temp;
	temp = value*pow(10,pos);
	temp=floor(temp+0.5);
	temp*=pow(10,-pos);
	return temp;
}

int main(void)
{
	int T,N,i,j,c,d=0;
	float grade, total=0; 

	scanf("%d",&T);
	
	for(j=0;j<T;j++)
	{
		total=0;
		d=0;
		scanf("%d",&N);
		for(i=0;i<N;i++)
		{
			scanf("%d %f",&c,&grade);
			d=d+c;
			total=total+c*grade;
		}
		total=round(total/d,1);
		printf("%d %.01f \n",d,total);

	}
	
	return 0;
}
