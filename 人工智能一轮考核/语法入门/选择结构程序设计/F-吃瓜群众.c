#include <stdio.h>
int main ()
{
	int weight;
	scanf("%d",&weight);
	if (weight%2) {
		printf("NO, you can't divide the watermelon into two even parts.");
	}else {
		if (weight/2%2) {
			if (weight/2-1) {
				printf("YES, you can divide the watermelon into two even parts.");
			}else {
				printf("NO, you can't divide the watermelon into two even parts.");
				
			}
		}else {
			printf("YES, you can divide the watermelon into two even parts.");
		}
	}
	return 0;
}
