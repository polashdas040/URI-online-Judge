
#include <stdio.h>
int main(){
    
    double x, y=0, z=0, n=0;
   
    while(1){
            scanf("%lf",&x);
            
            if(n == 1){
                     
                if(x == 2){
                    break;
                }else if(x == 1){
                    n = 0;
                    continue;
                }
                else{
                    printf("novo calculo (1-sim 2-nao)\n");
                    continue;
                    }
           }else{
                if(x < 0 || x > 10){
                    printf("nota invalida\n");
                    }
                else if(z == 0){
                    y = x;
                    z = 1;
                }
                else{
                    printf("media = %.2lf\n", (x+y)/2.00);
                    z = 0;
                    n = 1;
                   }
                }
                
                if(n == 1) printf("novo calculo (1-sim 2-nao)\n");
                     
    }    
    return 0;
}

