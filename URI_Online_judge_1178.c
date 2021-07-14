#include <stdio.h>
int main() {

	int i;
	double N[100],X;

	scanf("%lf",&X);
	N[i] = X;
	
	for(i=0; i<100; i++) {

		printf("N[%d] = %.4lf\n",i,N[i]);

		X/= 2.0;
		N[i+1] = X;

	}

	return 0;
}
