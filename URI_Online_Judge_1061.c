#include <stdio.h>
 
int main() {
 
    int d1,d2,h1,h2,m1,m2,s1,s2,W,X,Y,Z,day1,day2,cal;
	 
    scanf("%*s%d",&d1);
    scanf("%d%*s",&h1);
	scanf("%d%*s",&m1);
	scanf("%d",&s1);
	scanf("%*s%d",&d2);
    scanf("%d%*s",&h2);
	scanf("%d%*s",&m2);
	scanf("%d",&s2);
    
    Z = s2 - s1;
    Y = m2 - m1;
    X = h2 - h1;
    W = d2 - d1;
    
    if(Z<0){
    	Z+=60;
    	Y--;
	}
	if(Y<0){
    	Y+=60;
    	X--;
	}
	if(X<0){
    	X+=24;
    	W--;
	}
    
	
	printf("%d dia(s)\n",W);
	printf("%d hora(s)\n",X);
	printf("%d minuto(s)\n",Y);
	printf("%d segundo(s)\n",Z);
	
    return 0;
}