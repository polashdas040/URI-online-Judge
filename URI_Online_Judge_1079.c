#include <stdio.h>
 
int main() {
 
    int N,i;
    float a,b,c,avg;
    
    scanf("%d",&N);
    for(i=0; i<N; i++){
    	scanf("%f", &a);
  	scanf("%f", &b);
  	scanf("%f", &c);
    	avg = (a*2 + b*3 + c*5)/10;
    	printf("%.1f\n", avg);
	}
    
 
    return 0;
}
