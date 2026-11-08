#include <stdio.h>
int main ()
{
	int n,k,m,n_,i;
	int N[100]={0};
	scanf("%d %d %d",&n,&k,&m);
	n_=n-1;
	i=m;
	while (n_)
	{
		if (i==1) {
			N[k]=1;
			n_--;
			i=m;
		}else {i--;}
		do{
			k++;
			if (k==n) k=0;
		}while (N[k]);
		
	}
	printf("%d",k);
	return 0;
}
