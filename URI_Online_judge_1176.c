#include <stdio.h>
int main() {

	long long int N[60];
	int T,n,i,Fib;
	N[0]=0;
	N[1]=1;

	for(i=2; i<=60; i++) {

		N[i] = N[i-1] + N[i-2];

	}

	scanf("%d",&T);
	while(n<T) {
		scanf("%d",&Fib);
		printf("Fib(%d) = %lld\n",Fib,N[Fib]);

		n++;
	}


	return 0;
}
