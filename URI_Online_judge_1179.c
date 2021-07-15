#include <stdio.h>
int main() {

	int par[5], impar[5],i,j,n,pa=0,im=0;

	for(i=0; i<15; i++) {
		scanf("%d",&n);

		if(n%2==0) {
			par[pa]=n;
			pa++;
		} else {
			impar[im]=n;
			im++;
		}

		if(pa==5) {
			for(j=0; j<5; j++) {
				printf("par[%d] = %d\n",j,par[j]);
			}
			pa=0;
		}
		if(im==5) {
			im=0;
			for(j=0; j<5; j++) {
				printf("impar[%d] = %d\n",j,impar[j]);
			}

			im=0;
		}

		if(i==14) {
			for(j=0; j<im; j++) {
				printf("impar[%d] = %d\n",j,impar[j]);
			}

			for(j=0; j<pa; j++) {
				printf("par[%d] = %d\n",j,par[j]);
			}

		}
	}

	return 0;
}
