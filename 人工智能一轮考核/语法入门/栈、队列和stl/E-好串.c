#include <stdio.h>
char s[100001];
int main ()
{
	int i=0,tf=0;
	scanf("%s",s);
	while (s[i]!=0)
	{
		if (s[i]=='a')
			tf++;
		else if (s[i]=='b')
			tf--;
		if (tf<0) {
			printf("Bad");
			return 0;
		}
		i++;
	}
	if (tf==0)
		printf("Good");
	else
		printf("Bad");
	return 0;
}
