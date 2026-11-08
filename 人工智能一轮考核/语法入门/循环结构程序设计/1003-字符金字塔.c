#include <stdio.h>
int main ()
{
	char Input,i='A',ii,iii;
	scanf("%c",&Input);
	while (i<Input+1)
	{
		ii='A';
		iii=Input-i;
		while (iii>0)
		{
			printf(" ");
			iii--;
		}
		while (ii<i+1)
		{
			printf("%c",ii);
			ii++;
		}
		ii-=2;
		while (ii>'A'-1)
		{
			printf("%c",ii);
			ii--;
		}
		printf("\n");
		i++;
	}
	return 0;
}
