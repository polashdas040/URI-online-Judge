#include <stdio.h>
 
int main() {

	int i, X;
	
	scanf("%d",&X);
	
	if(1 <= X && X <= 1000){
		
		for(i = 1; i <= X ; i = i+2){
			
				printf("%d\n",i);
			}
		}
    return 0;
}
