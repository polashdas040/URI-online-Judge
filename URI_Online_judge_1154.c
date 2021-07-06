#include <stdio.h>
int main() {

	int n,count,age=0;
	float avg;

	while(1) {

		scanf("%d",&n);

		if(n<=0) {
			break;
		} else {
			count++;
			age +=n;
		}

	}

	avg = (float) age / count;
	printf("%.2f\n",avg);

	return 0;
}

