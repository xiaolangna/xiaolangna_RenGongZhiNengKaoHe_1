#include <stdio.h>
int main ()
{
	int i,ii,iii,n;
	while (scanf("%d",&n)!=EOF)
	{
		n=n+1;
		i=1;
		while (i<n)
		{
			ii=0;
			iii=n-i;
			while (iii>0)
			{
				printf("  ");
				iii--;
			}
			while (ii<i)
			{
				printf("*");
				ii++;
			}
			printf("\n");
			i++;
		}
		while (i<2*n)
		{
			ii=2*n-i;
			iii=i-n;
			while (iii>0)
			{
				printf("  ");
				iii--;
			}
			while (ii>0)
			{
				printf("*");
				ii--;
			}
			i++;
			printf("\n");
		}
	}
	return 0;
}

