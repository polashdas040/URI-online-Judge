#include <stdio.h>
 
int main() {

	int i, X,odd;
	
	scanf("%d",&X);
	
		for(i = X; i < X+12 ; i = i+2){
			
			if(X%2==0){
				
				odd = i + 1;
				printf("%d\n",odd);
				
			}else{
				
				odd = i;
				printf("%d\n",odd);
			}
	}
		
    return 0;
}
