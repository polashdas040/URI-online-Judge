#include <stdio.h>
int main() {
 
    int N,i,square;
    scanf("%d",&N);
    
   	for(i=2; i<=N; i=i+2){
    			
    	if(N%2==0){
    	 square = i*i;
    	 printf("%d^2 = %d\n",i,square);
    		 
			}
		}
	
    return 0;
}
