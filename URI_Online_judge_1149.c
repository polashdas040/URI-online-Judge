#include <stdio.h>
int main() {
	int A,N,i,sum=0;

	scanf("%d",&A);


	while(1) {

		scanf("%d",&N);

		if(N<=0) {
			continue;
		} else {

			for(i=A; i<A+N; i++) {

				sum +=i;
			}
			printf("%d\n",sum);
			break;
		}

	}

	return 0;
}

