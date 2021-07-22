#include<stdio.h>
#include<math.h>
int main() {

	int A, B, C, Area,s;
	while(1) {
		scanf("%d",&A);
		if(A==0) {
			break;
		} else {
			scanf("%d %d",&B, &C);
			Area =(A*B*100)/C;
			s = sqrt(Area);
		}
		printf("%d\n",s);
	}
	return 0;
}
