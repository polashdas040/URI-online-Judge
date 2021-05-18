#include<stdio.h>
int main()
{
	int i,j,x=7;

	for(i=1;i<=9;i+=2)
	{
		for(j=1; j<=3 ;j++){
	
			printf("I=%d J=%d\n",i,x);
			x--;
		}
		x = x + 5;
		
	}
		
	return 0;
}
