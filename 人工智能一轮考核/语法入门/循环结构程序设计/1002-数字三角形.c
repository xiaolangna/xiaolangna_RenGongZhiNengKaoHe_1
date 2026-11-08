#include <stdio.h>
int main ()
{
	int n,i=0,ii,iii=1;
	scanf("%d",&n);
	while (i<n)
	{
		ii=-1;
		while (ii<i)
		{
			printf("%4d",iii);
			iii++;
			ii++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
