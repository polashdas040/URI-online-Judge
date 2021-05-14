#include <stdio.h>
 
int main() {
 
    int N,i,Multiplication;
    scanf("%d",&N);
    
    for(i=1; i<=10; i++){
    	
    	Multiplication = i * N;
    	printf("%d x %d = %d\n",i,N,Multiplication);
    	
	}
     
    return 0;
}
