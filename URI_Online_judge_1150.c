#include <stdio.h>
int main() {
	
	int X,Z,i,count=0,sum=0;
	
	scanf("%d",&X);
	
	while(1){
		scanf("%d",&Z);
		
		if(X<Z){
			break;
		}else{
			continue;
		}
	}
	
	for(i=X; sum <Z ;i++){
		count++;
		sum+=i;
	}
	
	printf("%d\n",count);
	return 0;
}

