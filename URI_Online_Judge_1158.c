#include <stdio.h>
int main() {

	int n,x,y,i,j,odd=0;

	scanf("%d",&n);

	while(i<n) {

		scanf("%d%d",&x,&y);

		if(x%2==1) {
			for(j=1; j<=y; j++) {

				odd +=x;
				x +=2;
			}
			printf("%d\n",odd);
		} else {
			x++;
			for(j=1; j<=y; j++) {

				odd +=x;
				x +=2;
			}
			printf("%d\n",odd);
		}

		i++;
		odd=0;
	}

	return 0;
}
