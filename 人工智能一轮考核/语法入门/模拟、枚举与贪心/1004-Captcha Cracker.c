#include <stdio.h>
int main ()
{
	int t,i;
	char txt[100001];
	scanf("%d",&t);
	while (t)
	{
		t--;
		scanf("%s",txt);
		i=0;
		while (txt[i])
		{
			switch (txt[i]) {
				case'0':case'2':case'4':case'6':case'9':
					printf("%c",txt[i]);
					break;
				case'z':
					if (txt[i+1]=='e')
					if (txt[i+2]=='r')
					if (txt[i+3]=='o')
						i+=3,printf("0");
					break;
				case't':
					if (txt[i+1]=='w')
					if (txt[i+2]=='o')
						i+=2,printf("2");
					break;
				case'f':
					if (txt[i+1]=='o')
					if (txt[i+2]=='u')
					if (txt[i+3]=='r')
						i+=3,printf("4");
					break;
				case's':
					if (txt[i+1]=='i')
					if (txt[i+2]=='x')
						i+=2,printf("6");
					break;
				case'n':
					if (txt[i+1]=='i')
					if (txt[i+2]=='n')
					if (txt[i+3]=='e')
						i+=3,printf("9");
					break;
			}
			i++;
		}
		printf("\n");
	}
	return 0;
}
