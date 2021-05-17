#include <stdio.h>
 
int main() {
 
    int N,i,highest=0,position;
    
    for(i=0; i<100; i++){
    	scanf("%d",&N);
    	if(N>highest){
    		highest = N;
    		 position = i + 1;
		}
    	
	}
	
	printf("%d\n%d\n",highest,position);
 
    return 0;
}
