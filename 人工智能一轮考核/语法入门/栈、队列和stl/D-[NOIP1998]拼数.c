#include <stdio.h>
#include <stdlib.h>
long long n_[20];
int temp (const void *a,const void *b)
{
	int L1=0,L2=0;
	long long L0,temp_=0;
	long long va=*(const long long *)a;
	long long vb=*(const long long *)b;
	long long va_=vb,vb_=va;
	while (va) va/=10,L1++;
	while (vb) vb/=10,L2++;
	va=vb_;
	vb=va_;
	if (L1>L2) {
		L0=L1-L2;
		L2+=L0-1;
		while (L0)
		{
			L0--;
			temp_*=10;
			temp_+=va%10;
			va/=10;
		}
		L0=1;
		while (L2) L2--,L0*=10;
		while (temp_)
		{
			vb+=temp_%10*L0;
			L0/=10;
			temp_/=10;
		}
	}
	if (L1<L2) {
		L0=L2-L1;
		L1+=L0-1;
		while (L0)
		{
			L0--;
			temp_*=10;
			temp_+=va_%10;
			va_/=10;
		}
		L0=1;
		while (L1) L1--,L0*=10;
		while (temp_)
		{
			vb_+=temp_%10*L0;
			L0/=10;
			temp_/=10;
		}
	}
	if (va>va_)
		return 1;
	if (va<va_)
		return -1;
	if (vb>vb_)
		return 1;
	if (vb<vb_)
		return -1;
	return 0;
}
int main ()
{
	int n,i;
	scanf("%d",&n);
	i=n;
	while (i) i--,scanf("%lld",n_+i);
	qsort(n_,n,sizeof(long long),temp);
	i=n;
	while (i) i--,printf("%lld",n_[i]);
	return 0;
}
