#include <stdio.h>
 
int main() {
 
    int x,y,z,i,sum=0;
    
    scanf("%d%d",&x,&y);
    
    if(x>y){
    	z = x;
    	x = y;
    	y = z;
    	
	}
	
	if(x==y){
		printf("0");
	}
	else{
		if(x%2==0){
		x++;
		
			for(i=x; i<y; i=i+2){
			sum = sum + i;
			}
	}
	
		else{
			x = x +2;
			for(i=x; i<y; i=i+2){
			sum = sum + i;
		
			}
		}
    
    printf("%d\n",sum);
	}
	
 
    return 0;
}
