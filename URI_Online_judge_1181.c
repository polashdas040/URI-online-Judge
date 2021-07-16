#include <stdio.h>
int main() {

	double M[12][12],val = 0.0;
	char T[2];
	int L, i, j;

	scanf("%d",&L);
	scanf("%s",&T);

	for(i=0; i<12; i++) {
		for(j=0; j<12; j++) {
			scanf("%lf",&M[i][j]);

			if(i == L) {
				val += M[i][j];
			}

		}
	}

	if(T[0] =='S') {
		printf("%.1lf\n",val);
	} else if(T[0] == 'M') {
		val = val/12.0;
		      printf("%.1lf\n",val);
	}

	return 0;
}
