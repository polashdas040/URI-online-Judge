#include <stdio.h> 
int main() {
	
	int m,n,i,j,sum=0,t;
			
		while(1){
			
			scanf("%d%d",&m,&n);
			
			if(m <=0 || n <=0){
				break;
			}
		    else{
				
				if(m<n){
						
			        for(i=m; i<=n; i++){
			
			        printf("%d ",i);
			        sum +=i; 
		       }
		       printf("Sum=%d\n",sum);
		
		       }else{
		       	
			    t = n;
			    n = m;
			    m = t;
		
				for(i=m; i<=n; i++){
			
					printf("%d ",i);
					sum +=i; 
			
				}
			   printf("Sum=%d\n",sum);
			   sum=0;
			}
				
			}
			
		}
				   
    return 0;
}
