#include<stdio.h>
int main(){
	
	int i, a, count = 0;
	
	for (i = 0; i<5; i++){
		scanf("%d",&a);
		
		if(a%2==0){
			count++;
		}
	}
	
	printf("%d valores pares\n",count);
	
	return 0;
}
