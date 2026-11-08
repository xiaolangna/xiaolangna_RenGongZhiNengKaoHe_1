#include <stdio.h>
int main ()
{
	int x=1,y;
	goto start;
	while (x<10)
	{
		printf("\n");
		start:
		y=1;
		printf("%d*%d=%2d",y,x,x*y);
		while (y<x)
		{
			y++;
			printf(" %d*%d=%2d",y,x,x*y);
		}
		x++;
	}
	return 0;
}

