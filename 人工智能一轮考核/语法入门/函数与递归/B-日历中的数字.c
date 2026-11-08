#include <stdio.h>
int main ()
{
	int y,m,x,res;
	int m_[12]={31,0,31,30,31,30,31,31,30,31,30,31};
	while (scanf("%d %d %d",&y,&m,&x)!=EOF)
	{
		if (y%100)
			m_[1]=(y%4) ? 28:29;
		else
			m_[1]=(y%400) ? 28:29;
		res=0;
		while (y)
		{
			if (y%10==x) res++;
			y/=10;
		}
		y=m;
		if (y%10==x) res++;
		y/=10;
		if (y) {
			if (y%10==x) res++;
		}else {
			if (0==x) res++;
		}
		m=m_[m-1];
		res*=m;
		while (m)
		{
			y=m;
			if (y%10==x) res++;
			y/=10;
			if (y) {
				if (y%10==x) res++;
			}else {
				if (0==x) res++;
			}
			m--;
		}
		printf("%d\n",res);
		
	}
	return 0;
}
