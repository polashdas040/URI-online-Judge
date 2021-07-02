#include <stdio.h>
int main() {
	int N,i;

	scanf("%d",&N);

	for(i=1; i<= 4*N; i++) {
		if(i%4==0) {
			printf("PUM\n");
		} else {
			printf("%d ",i);
		}
	}

	return 0;
}

