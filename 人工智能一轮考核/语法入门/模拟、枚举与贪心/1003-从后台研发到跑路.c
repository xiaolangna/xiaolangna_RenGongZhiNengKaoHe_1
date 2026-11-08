#include <stdio.h>
int main ()
{
	char c1=0,c2,temp[5*1024+1];
	int c_;
	int YiHao=0,ZhuShu=0,i=0;
	while ((c_=getchar())!=EOF)
	{
		c2=(char)c_;
		if (ZhuShu==0) {
			if (c2=='"' && c1!='\\') {
				YiHao^=1^0;
			}else if (c2=='*' && c1=='/' && YiHao==0) {
				ZhuShu=1;
				c1=0;
				c2=0;
				temp[i++]='/';
				temp[i++]='*';
				temp[i]=0;
			}
			if (c1)
				printf("%c",c1);
		}else if (c2=='/' && c1=='*') {
			ZhuShu=0;
			c2=0;
			i=0;
		}else {
			temp[i++]=c2;
			temp[i]=0;
		}
		c1=c2;
	}
	if (ZhuShu) {
		printf("%s",temp);
	}
	return 0;
}
