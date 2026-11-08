#include <stdio.h>
#include <stdlib.h>
long long n_[100];
int temp (const void *a,const void *b)
{
	if (*(const long long *)a>*(const long long *)b)
		return -1;
	if (*(const long long *)a<*(const long long *)b)
		return 1;
	return 0;
}
int main ()
{
	int n,i;
	scanf("%d",&n);
	i=n;
	while (i) i--,scanf("%lld",n_+i);
	qsort(n_,n,sizeof(long long),temp);
	i=n-2;
	while (i)
	{
		i--;
		if (n_[i]<n_[i+1]+n_[i+2]) {
			printf("%lld %lld %lld",n_[i+2],n_[i+1],n_[i]);
			return 0;
		}
	}
	printf("No solution");
	return 0;
}
