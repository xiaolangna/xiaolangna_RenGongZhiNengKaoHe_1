#include <stdio.h>
int main ()
{
	int m,n;
	scanf("%d %d",&m,&n);
	if (m%n) {
		printf("NO");
	}else {
		printf("YES");
	}
	return 0;
}
