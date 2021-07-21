#include<stdio.h>
int main() {
	int a,b,i,j,n;

	while(scanf("%d",&n)!=EOF) {
		int N[n][n];
		b=n-1;
		for(i=0; i<n; i++) {
			for(j=0; j<n; j++) {
				N[i][j]=3;
				if(i==j) {
					N[i][j]=1;
				}
				if(j==b) {
					N[i][j]=2;
					b--;
				}
			}
		}
		for(i=0; i<n; i++) {
			for(j=0; j<n; j++) {
				printf("%d",N[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
