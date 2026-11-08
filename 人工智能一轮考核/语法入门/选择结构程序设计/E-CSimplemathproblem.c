#include <stdio.h>
int main ()
{
	long long X,Y;
	scanf("%lld %lld",&X,&Y);
	if (Y%X) {
		printf("%lld",Y-X);
	}else {
		printf("%lld",Y+X);
	}
	return 0;
}
