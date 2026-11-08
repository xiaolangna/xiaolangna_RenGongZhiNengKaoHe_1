#include <stdio.h>
int main ()
{
	int T,n,i;
	long long n_[100000],min,max;
	double sum,res,a;
	scanf("%d",&T);
	while (T)
	{
		i=0;
		min=10000000000;
		max=10000000000;
		sum=0.0;
		scanf("%d",&n);
		while (i<n)
		{
			scanf("%lld",&n_[i]);
			if (min==10000000000) {
				min=n_[i];
			}else {
				if (n_[i]<min) {
					if (max==10000000000) {
						max=min;
						min=n_[i];
					}else {
						min=n_[i];
					}
					
				}else {
					if (max==10000000000) {
						max=n_[i];
					}else {
						if (n_[i]>max) {
							max=n_[i];
						}
					}
				}
			}
			sum+=n_[i];
			i++;
		}
		if (max!=10000000000) min=max-min;
		sum/=n;
		i=0;
		res=0.0;
		while (i<n)
		{
			a=n_[i]-sum;
			a*=a;
			res+=a;
			i++;
		}
		res/=n;
		printf("%lld %.3lf\n",min,res);
		T--;
	}
	return 0;
}
