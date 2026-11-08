#include <stdio.h>
int main ()
{
	int L,R,L_,res=0;
	scanf("%d %d",&L,&R);
	R++;
	while (L-R)
	{
		L_=L;
		while (L_)
		{
			if (L_%10==2) res++;
			L_/=10;
		}
		L++;
	}
	printf("%d",res);
	return 0;
}
