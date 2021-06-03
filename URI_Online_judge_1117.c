#include <stdio.h> 
int main() {
	
	float x,X=0;
	int count=0;
	
	while(1){
		scanf("%f",&x);
		
		if(x<0 || x>10){
			printf("nota invalida\n");
		}else{
			count++;
			X += x;
		}
		
		if(count==2){
			printf("media = %.2f\n",(X/2));
			break;
		}
		
	}
		   
    return 0;
}
