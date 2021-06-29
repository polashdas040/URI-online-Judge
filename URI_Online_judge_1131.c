
#include <stdio.h>
int main(){
    
    int a,b,c,i=0,x=0,z=0,y=0;
    
    while(1){
    	scanf("%d%d",&a,&b);
    	if(a>b){
    		x++;
		}else if(b>a){
			y++;
		}else{
			z++;
		}
		i++;
		
		printf("Novo grenal (1-sim 2-nao)\n");
		
		scanf("%d",&c);
		
		if(c==1){
			continue;
		}else{
			break;
		}
	}
	
	printf("%d grenais\n",i);
	printf("Inter:%d\n",x);
	printf("Gremio:%d\n",y);
	printf("Empates:%d\n",z);
   
    if(a>b){
    	printf("Inter venceu mais\n");
	}else if(a<b){
		printf("Gremio venceu mais\n");
	}else{
		printf("Não houve vencedor\n");
	}
   
       
    return 0;
}

