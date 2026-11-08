#include <stdio.h>
int main ()
{
	int x,y,temp1,temp2,res=0;
	scanf("%d %d",&x,&y);
	y++;
	while (x-y)
	{
		temp1=0;
		temp2=x;
		while (temp2) temp1+=temp2%10,temp2/=10;
		if (temp1%5==0 && temp1) res++;
		x++;
	}
	printf("%d",res);
	return 0;
}
