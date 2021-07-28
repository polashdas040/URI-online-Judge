#include <stdio.h>
int main() {
	int L,V,i,max;

	while(scanf("%d",&L) !=EOF) {
		max = 0;
		for(i=0; i<L; i++) {
			scanf("%d",&V);
			if(max<V) {
				max = V;
			}
		}
		if(max<10) {
			printf("1\n");
		} else if(max>=10 && max<20) {
			printf("2\n");
		} else {
			printf("3\n");
		}
	}

	return 0;
}

