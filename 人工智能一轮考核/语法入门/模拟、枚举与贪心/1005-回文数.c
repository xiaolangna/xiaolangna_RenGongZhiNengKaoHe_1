#include <stdio.h>
int main ()
{
	int i=10,ii,iii,iiii,zero,L=0,CiShu[10];
	char temp[50];
	while (i) i--,scanf("%d",CiShu+i);
	i=10;
	ii=-1;
	iii=10;
	while (i)
	{
		i--;
		if (CiShu[i]==0) iii--;
		else zero=i; 
		if (CiShu[i]%2) {
			if (ii!=-1) {
				printf("-1\n");
				return 0;
			}else {
				ii=i;
			}
		}
	}
	if (iii==1) {
		if (CiShu[9]>1) {
			printf("-1\n");
			return 0;
		}
	}else if (iii==2) {
		if (CiShu[9]>1 && CiShu[zero]==1) {
			printf("-1\n");
			return 0;
		}
	}
	i=9;
	zero=0;
	while (i)
	{
		i--;
		if (CiShu[i]) {
			iii=CiShu[i]/2;
			while (iii)
			{
				iii--;
				printf("%d",9-i);
				temp[L++]='0'+9-i;
				if (zero==0) {
					iiii=CiShu[9]/2;
					while (iiii)
						iiii--,
						temp[L++]='0',
						printf("0");
					zero=i;
				}
			}
		}
	}
	if (ii!=-1) printf("%d",9-ii);
	while (L) L--,printf("%c",temp[L]);
	printf("\n");
	return 0;
}
