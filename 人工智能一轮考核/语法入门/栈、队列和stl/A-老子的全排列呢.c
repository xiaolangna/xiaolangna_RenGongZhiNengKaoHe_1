#include <stdio.h>
#define t 8		//t>=1
void temp_ (int *temp_lst,int L);
int x[t];
int main ()
{
	int x_[t];
	int i=0,ii;
	while (i<t)
	{
		ii=t;
		while (ii) ii--,x_[ii]=-1;
		x_[i]=0;
		temp_(x_,1);
		i++;
	}
	return 0;
}
void temp_ (int *temp_lst,int L)
{
	int i=0,tf=1;
	while (i<t)
	{
		if (temp_lst[i]==-1) {
			temp_lst[i]=L;
			tf=0;
			temp_(temp_lst,L+1);
			temp_lst[i]=-1;
		}
		i++;
	}
	if (tf) {
		i=0;
		while (i<t) x[temp_lst[i]]=i+1,i++;
		i=0;
		while (i<t-1) printf("%d ",x[i++]);
		printf("%d\n",x[t-1]);
	}
}
