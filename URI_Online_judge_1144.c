#include <stdio.h>
int main() {
	int N,i,j;

	scanf("%d",&N);

	for(i=1; i<=N; i++) {
		for(j=1; j<=2; j++) {

			if(j==1) {
				printf("%d %d %d\n",i,i*i,i*i*i);
			} else {
				printf("%d %d %d\n",i,(i*i)+1,(i*i*i)+1);
			}
		}

	}

	return 0;
}

