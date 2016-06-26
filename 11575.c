#include <stdio.h>
int main(void)
{
	int T,a,b,i,j,temp;
	char s[1000001];
	
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d %d",&a,&b);
		scanf("%s",s);
		for(j=0;s[j]!='\0';j++)
		{
			temp=s[j]-65;
			s[j]=(a*temp+b)%26+65;
		}
		printf("%s \n",s);
	}
	
	return 0;
}
