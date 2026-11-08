#include <stdio.h>
int main ()
{
	char key[31],key_NiBiao[25]="123456789147258369159357";
	int L,i,key_Biao[9],key_Ni[9];
	start:
	while (scanf("%s",key)!=EOF)
	{
		L=9;
		while (L) L--,key_Biao[L]=0,key_Ni[L]=0;
		while (key[L]) L++;
		if (L<10) {
			key_Biao[key[--L]-'1']=1;
			while (L)
			{
				L--;
				i=0;
				while (i<24)
				{
					if (key[L]==key_NiBiao[i] && key[L+1]==key_NiBiao[i+2]) {
						key_Ni[key_NiBiao[i+1]-'1']=1;
						goto end1;
					}
					i+=3;
				}
				while (i)
				{
					if (key[L]==key_NiBiao[i-1] && key[L+1]==key_NiBiao[i-3]) {
						key_Ni[key_NiBiao[i-2]-'1']=1;
						goto end1;
					}
					i-=3;	
				}
				end1:
					key_Ni[key[L]-'1']=0;
					if (key_Biao[key[L]-'1']) {
						printf("NO\n");
						goto start;
					}else {
						key_Biao[key[L]-'1']=1;
					}
			}
			i=9;
			while (i) 
			{
				i--;
				if (key_Ni[i]) {
					printf("NO\n");
					goto start;
				}
			}
			printf("YES\n");
		}else {
			printf("NO\n");
		}
	}
	return 0;
}
