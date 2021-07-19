#include<stdio.h>
int main() {
	int a,i,j,n;

	while(1) {
		scanf("%d",&n);

		if(n==0) {
			break;
		} else {
			for(i=1; i<=n; i++) {
				for(j=1; j<=n; j++) {
					a = j;
					if(i>j){
						a=i;
					}else if(i<j&&i==j){
						a = j-1;
					}else if(i< j){
						a=i;
					}
					
				printf("%3d",a);
				}
				printf("\n");
			}

		}
		printf("\n");
	}
	return 0;
}
