#include <stdio.h>
int main() {

	int n,i,j,even;

	while(1) {

		scanf("%d",&n);

		if(n==0) {
			break;
		} else {
			even =0;
			if(n%2==0) {
				for(j=1; j<=5; j++) {

					even +=n;
					n +=2;
				}
				printf("%d\n",even);
			} else {
				even =0;
				n++;
				for(j=1; j<=5; j++) {

					even +=n;
					n +=2;
				}
				printf("%d\n",even);
			}

		}

	}

	return 0;
}
