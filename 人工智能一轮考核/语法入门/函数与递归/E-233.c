#include <stdio.h>
int main ()
{
	int T,temp,L_t1,L_t2;
	char t1[51],t2[51];
	scanf("%d",&T);
	while (T)
	{
		T--;	
		scanf("%s %s",t1,t2);
		L_t1=3;
		L_t2=3;
		while (t1[L_t1]) L_t1++;
		while (t2[L_t2]) L_t2++;
		temp=L_t2-L_t1;
		if (temp<0) temp=-temp,L_t1=L_t2;
		L_t1-=3;
		printf("54");
		L_t2=L_t1;
		while (L_t1) L_t1--,printf("4");
		if (temp) {
			printf("3");
			temp--;
			while (temp) temp--,printf("6");
			printf("58");
		}else {
			printf("28");
		}
		while (L_t2) L_t2--,printf("8");
		printf("9\n");
	}
	return 0;
}
