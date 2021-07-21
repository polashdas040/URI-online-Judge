#include<stdio.h>
int main() {
	int a,b,i,j,n;

	while(1) {
		scanf("%d",&n);
		int N[n][n];

		if(n==0) {
			break;
		} else {
			for(i=0; i<n; i++) {
				a = i+1;
				b=2;
				for(j=0; j<=i; j++,a--) {
					N[i][j] = a;
				}
				for(j=i+1; j<n; j++,b++) {
					N[i][j] = b;
				}
			}
		}

		for(i=0; i<n; i++) {
			for(j=0; j<n; j++,b++) {
				if(j==0) {
					printf("%3d",N[i][j]);
				} else {
					printf(" %3d",N[i][j]);
				}
			}
			printf("\n");
		}
		printf("\n");
	}


	return 0;
}
