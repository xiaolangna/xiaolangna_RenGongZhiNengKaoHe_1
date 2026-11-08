#include <stdio.h>
#include <stdlib.h>
int _n__[100000];
int _ (const void *a,const void *b)
{
	if (*(const int *)a>*(const int *)b)
		return -1;
	if (*(const int *)a<*(const int *)b)
		return 1;
	return 0;
}
int main ()
{
	int i,temp_;
	int n,k;
	long long res=0;
	scanf("%d %d",&n,&k);
	i=n;
	while (i) i--,scanf("%d",_n__+i);
	i=n;
	while (i){
		i--;
		scanf("%d",&temp_);
		res+=temp_;
		_n__[i]-=temp_;
	}
	qsort(_n__,n,sizeof(int),_);
	i=k;
	while (i) i--,res+=_n__[i];
	printf("%lld",res);
	return 0;
}
