#include <stdio.h>
int main() {

	int n,x,i,j,p;

	scanf("%d",&n);

	for(i=0; i<n; i++) {
		scanf("%d",&x);
		p=0;
		for(j = 1; j<x; j++) {
			if(x %j == 0) {
				p++;
			}
		}
		if(p==1) {
			printf("%d eh primo\n",x);
		} else {
			printf("%d nao eh primo\n",x);
		}

	}
	return 0;
}
