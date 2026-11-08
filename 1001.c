#include <stdio.h>
int main ()
{
	int n,i,t_=1;
	long t;
	char qdgg[200001];
	scanf("%d %ld %s",&n,&t,qdgg);
	i=n;
	while (i) if (qdgg[--i]=='.') break;
	if (i && t) {
		i++;
		while (i<n)
		{
			if (qdgg[i]=='4') {
				if (t_<t) {
					t_++;
				}
			}else if (qdgg[i]>'4') {
				i-=t_;
				if (qdgg[i]=='9') {
					if (qdgg[i-1]=='.') {
						i--;
						_:
						qdgg[i--]=0;
						while (i && qdgg[i]=='9')
							qdgg[i--]='0';
						if (i) {
							qdgg[i]++;
						}else {
							if (qdgg[0]=='9') {
								qdgg[0]='0';
								printf("1");
							}else {
								qdgg[0]++;
							}
						}
					}else {
						qdgg[i-1]++;
						qdgg[i]=0;
					}
				}else if (qdgg[i]=='.') {
					goto _;
				}else {
					qdgg[i]++;
					qdgg[i+1]=0;
				}
				printf(qdgg);
				return 0;
			}else {
				t_=1;
			}
			i++;
		}
	}
	printf(qdgg);
	return 0;
}
