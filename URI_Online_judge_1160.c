#include <stdio.h>
int main() {

	int T,PA,PB,i,year;
	double G1,G2;

	scanf("%d",&T);

	while(T>i) {

		year = 0;
		scanf("%d%d %lf%lf",&PA,&PB,&G1,&G2);

		while(PA<=PB) {

			PA = PA + ((PA * G1) / 100);
			PB = PB + ((PB * G2) / 100);

			year++;

			if(year >100) {
				printf("Mais de 1 seculo.\n");
				break;
			}
		}

		if(year <= 100) {
			printf("%d anos.\n",year);
		}
		
		i++;

	}

	return 0;
}
