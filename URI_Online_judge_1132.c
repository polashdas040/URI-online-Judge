#include <stdio.h>
int main() {
	int x,y,i,t=0;
	scanf("%d%d",&x,&y);

	if(x<y) {

		for(i = x; i<=y; i++) {
			if(i%13 != 0) {
				t += i;
			}
		}
	} else {
		for(i = x; i>=y; i--) {
			if(i%13 != 0) {
				t += i;
			}

		}
	}


	printf("%d\n",t);

	return 0;
}

