#include<stdio.h>
int main() {
	int n,i,j,a,b;

	while(1) {
		scanf("%d",&n);
		if(n==0) {
			break;
		} else {
			int array[n][n];
			b=1;
			for(i=0; i<n; i++) {
				a=b;
				for(j=0; j<n; j++) {
					array[i][j]=a;
					a+=a;
				}
				b+=b;
			}
			for(i=0; i<n; i++) {
				for(j=0; j<n; j++) {
					if(n==1) {
						printf("%d",array[i][j]);
					} else if(n==2) {
						if(j==0) {
							printf("%d ",array[i][j]);
						} else {
							printf("%d",array[i][j]);
						}
					} else if(n==3 || n==4) {
						if(j==0) {
							printf("%2d",array[i][j]);
						} else {
							printf("%3d",array[i][j]);
						}
					} else if(n==5) {
						if(j==0) {
							printf("%3d",array[i][j]);
						} else {
							printf("%4d",array[i][j]);
						}
					} else if(n==6 || n==7) {
						if(j==0) {
							printf("%4d",array[i][j]);
						} else {
							printf("%5d",array[i][j]);
						}
					} else if(n==8 || n==9) {
						if(j==0) {
							printf("%5d",array[i][j]);
						} else {
							printf("%6d",array[i][j]);
						}
					} else if(n==10) {
						if(j==0) {
							printf("%6d",array[i][j]);
						} else {
							printf("%7d",array[i][j]);
						}
					} else if(n==11 || n==12) {
						if(j==0) {
							printf("%7d",array[i][j]);
						} else {
							printf("%8d",array[i][j]);
						}
					} else if(n==13 || n==14) {
						if(j==0) {
							printf("%8d",array[i][j]);
						} else {
							printf("%9d",array[i][j]);
						}
					} else if(n==15) {
						if(j==0) {
							printf("%9d",array[i][j]);
						} else {
							printf("%10d",array[i][j]);
						}
					}
				}
				printf("\n");
			}
			printf("\n");
		}
	}
	return 0;
}
