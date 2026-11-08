#include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	if (n%2) {
		printf("%d",n*3+1);
	}else {
		printf("%d",n/2);
	}
	return 0;
}
