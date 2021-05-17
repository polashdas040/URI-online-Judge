#include <stdio.h>
 
int main() {
	int N,i,C=0,R=0,S=0,Amount,Total=0;
	float c,r,s;
	char ch;
	scanf("%d",&N);
	
	for(i=0; i<N; i++){
		scanf("%d %c",&Amount,&ch);
			if(ch=='C'){
				C += Amount;
			}
			else if(ch=='R'){
				R += Amount;
			}
			else if(ch=='S'){
				S += Amount;
			}
		}
		
	Total = C + R + S;
	c = (C*100.0)/(Total*1.00);
	r = (R*100.0)/Total;
	s = (S*100.0)/Total;
		
	printf("Total: %d cobaias\n",Total);
	printf("Total de coelhos: %d\n",C);
	printf("Total de ratos: %d\n",R);
	printf("Total de sapos: %d\n",S);
	printf("Percentual de coelhos: %.2f %%\n",c);
	printf("Percentual de ratos: %.2f %%\n",r);
	printf("Percentual de sapos: %.2f %%\n",s);
	

    return 0;
}
