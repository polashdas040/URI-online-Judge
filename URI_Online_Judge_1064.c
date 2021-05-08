#include <stdio.h>
 
int main() {
 
	int i,count=0;
	float a,s,average;
	
	
	for(i=0; i<6; i++){
		scanf("%f",&a);
		
		if(a>=0){
			count++;
			s +=a;
		}
		
	}
	
		average = s/count;
		
		printf("%d valores positivos\n",count);
		printf("%.1f\n",average);
 
 
    return 0;
}
