#include <stdio.h>
int main ()
{
	int n,n_,n__;
	scanf("%d",&n);
	if (n) {
		if (n-1) {
			while (n) 
				n--,
				n__=n_,
				scanf("%d",&n_);
			if (n_==0) {
				printf("UP");
			}else if (n_==15) {
				printf("DOWN");
			}else {
				if (n_>n__) {
					printf("UP");
				}else {
					printf("DOWN");
				}
			}
		}else {
			scanf("%d",&n_);
			if (n_==0) {
				printf("UP");
			}else if (n_==15) {
				printf("DOWN");
			}else {
				printf("-1");
			}
		}
	}else {
		printf("-1");
	}
	return 0;
}
