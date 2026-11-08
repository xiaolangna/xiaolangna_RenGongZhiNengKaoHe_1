#include <stdio.h>
int main ()
{
	int i,ii,iii,n;
	while (scanf("%d",&n)!=EOF)
	{
		i=1;
		while (i<n)
		{
			ii=0;
			iii=n-i;
			while (iii>0)
			{
				printf(" ");
				iii--;
			}
			while (ii<2*i-1)
			{
				printf("*");
				ii++;
			}
			printf("\n");
			i++;
		}
		while (i<2*n)
		{
			ii=4*n-2*i-1;
			iii=i-n;
			while (iii>0)
			{
				printf(" ");
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
