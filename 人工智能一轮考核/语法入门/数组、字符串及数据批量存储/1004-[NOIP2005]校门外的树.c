#include <stdio.h>
int main ()
{
	int L,M,l,r,res;
	int L_[10001]={0};
	scanf("%d %d",&L,&M);
	while (M)
	{
		M--;
		scanf("%d %d",&l,&r);
		while (r-l) L_[l]=1,l++;
		L_[l]=1;
	}
	res=++L;
	while (L) L--,res-=L_[L];
	printf("%d",res);
	return 0;
}
