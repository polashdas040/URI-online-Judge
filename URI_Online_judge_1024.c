#include<stdio.h>
#include<string.h>
int main() {

	int a,n,i,j,len;
	char M1[1000],M2[1000];
	scanf("%d",&n);
	getchar();

	while(a<n) {
		gets(M1);

		len = strlen(M1);
		for(i=0; i<len; i++) {

			if((M1[i]>='a' && M1[i]<='z')|| (M1[i]>='A' && M1[i]<='Z')) {

				M1[i]+=3;
			}
		}
		j=0;
		for(i=len-1; i>=0; i--) {
			M2[j] = M1[i];
			j++;
		}
		M2[j]='\0';
		for(i=len/2; i<len; i++) {
			M2[i] -= 1;
		}
		printf("%s\n",M2);

		a++;
	}

	return 0;
}
