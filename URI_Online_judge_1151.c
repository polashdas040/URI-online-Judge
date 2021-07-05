#include <stdio.h>
int main() {

	int x,i=1,a=0,b=1,r=0;
	scanf("%d",&x);

	while(i<=x) {

		if(i<x) {
			printf("%d ",a);

		} else {
			printf("%d\n",a);
		}

		r = a + b;
		a = b;
		b = r;

		i++;
	}
	return 0;
}

