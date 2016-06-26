#include <stdio.h>
int a[100][100];
long long d[100][100];
int i,j,k,n;
int main() 
{
    scanf("%d",&n);
    for (i=0; i<n; i++) 
	{
        for (j=0; j<n; j++) 
		{
            scanf("%d",&a[i][j]);
        }
    }
    
    d[0][0] = 1;
    
    for (i=0; i<n; i++) 
	{
        for (j=0; j<n; j++) 
		{
            if (i == 0 && j == 0) 
				continue;
            for (k=0; k<j; k++) 
			{
                if (k+a[i][k] == j) 
                    d[i][j] += d[i][k];
            }
            for (k=0; k<i; k++) 
			{
                if (k+a[k][j] == i) 
                    d[i][j] += d[k][j];
            }
        }
    }
    
    printf("%lld \n",d[n-1][n-1]);
    
    return 0;
}
