#include <stdio.h>
int main() {

	double M[12][12],val = 0.0;
	char O[2];
	int i, j;

	scanf("%s",&O);

	for(i=0; i<12; i++) {
		for(j=0; j<12; j++) {
			scanf("%lf",&M[i][j]);

			if(i > j) {
				val += M[i][j];
			}

		}
	}

	if(O[0] =='S') {
		printf("%.1lf\n",val);
	} else if(O[0] == 'M') {
		val = val/66.0;
		printf("%.1lf\n",val);
	}

	return 0;
}
