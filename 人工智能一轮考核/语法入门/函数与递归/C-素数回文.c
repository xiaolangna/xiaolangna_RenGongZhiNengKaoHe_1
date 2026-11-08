#include <stdio.h>
int main ()
{
	unsigned long long t,t_;
	scanf("%llu",&t);
	t_=t/10;
	while (t_)
	{
		t*=10;
		t+=t_%10;
		t_/=10;
	}
	if (t%2==0) {
		printf("noprime");
		return 0;
	}else {
		t_=3;
		while (t_<=t/t_)
		{
			if (t%t_==0) {
				printf("noprime");
				return 0;
			}
			t_+=2;
		}
	}
	printf("prime");
	return 0;
}
