#include <stdio.h> 
int main() {
	
	int n,x,y,i,j,sum=0,t;
	
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d%d",&x,&y);
		if(x<y){
			for(j=x+1; j<y; j++){
			if(j%2==1){
				sum +=  j;
			}
			
		}
		}else{
			t = y;
			y = x;
			x = t;
			
			for(j=x+1; j<y; j++){
			if(j%2==1){
				sum +=  j;
			}
			
		}
		
		}
		
		printf("%d\n",sum);
		sum=0;
	}
    
    return 0;
}
