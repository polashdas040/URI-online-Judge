#include <stdio.h>
int main() {

	int N,i,min,pos;

	scanf("%d",&N);
	int X[N];

	for(i=0; i<N; i++) {
		scanf("%d",&X[i]);

	}

	min = X[0];

	for(i=0; i<N; i++) {

		if(min> X[i]) {
			min = X[i];
			pos=i;
		}

	}
	printf("Menor valor: %d\n",min);
	printf("Posicao: %d\n",pos);


	return 0;
}
