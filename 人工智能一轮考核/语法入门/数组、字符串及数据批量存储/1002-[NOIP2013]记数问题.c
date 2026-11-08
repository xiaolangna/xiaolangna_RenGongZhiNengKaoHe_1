#include <stdio.h>
int main ()
{
	int n,x,a,res=0;
	scanf("%d %d",&n,&x);
	while (n)
	{
		a=n;
		while (a)
		{
			if (a%10==x) res++;
			a/=10;
		}
		n--;
	}
	printf("%d",res);
	return 0;
}
