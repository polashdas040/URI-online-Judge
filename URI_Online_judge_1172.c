#include <stdio.h>
int main() {

	int x[10],i,j;

	for(i=0; i<10; i++) {
		scanf("%d",&x[i]);
	}

	for(j=0; j<10; j++) {

		if(x[j] <=0) {
			x[j]=1;
			printf("X[%d] = %d\n",j,x[j]);
		} else {
			printf("X[%d] = %d\n",j,x[j]);
		}

	}

	return 0;
}
