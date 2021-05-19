#include <stdio.h>
 
int main() {
 
    float i,j,a=1;
    
    for(i=0; i<2.2; i+=0.2){
    	for(j=1; j<=3; j++,a++)
    	{
    		if(i==0.0){
    			printf("I=%.0f J=%.0f\n",i,a);
			}
			else if(i==1.0){
    			printf("I=%.0f J=%.0f\n",i,a);
			}
			else if(i>=2.0){
    			printf("I=%.0f J=%.0f\n",i,a);
			}
			else{
				printf("I=%.1f J=%.1f\n",i,a);
			}
		}
		a= a-2.8;

	}
 
    return 0;
}
