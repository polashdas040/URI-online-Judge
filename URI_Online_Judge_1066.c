#include<stdio.h>
int main(){
	
	int i, a, even=0,odd=0,positive=0,negative=0;
	
	for (i = 0; i<5; i++){
		scanf("%d",&a);
		
		if(a%2==0){
			even++;
		}else{
			odd++;
		}
		if(a>0){
			positive++;
		}else{
			if(a != 0){
				negative++;
			}
		}
	}
	
	printf("%d valor(es) par(es)\n",even);
	printf("%d valor(es) impar(es)\n",odd);
	printf("%d valor(es) positivo(s)\n",positive);
	printf("%d valor(es) negativo(s)\n",negative);
	
	
	return 0;
}
