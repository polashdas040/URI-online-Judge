#include <stdio.h>
int main()
{
    int i_h, i_m, f_h, f_m, duration,hours,minutes;
    scanf("%d %d %d %d", &i_h, &i_m, &f_h, &f_m);
    
    duration = ((f_h * 60)+f_m)  - ((i_h * 60)+i_m);
    
    if(duration <=0){
    	duration += 24*60;
	}
    
    hours = duration/60;
    minutes = duration%60;
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hours,minutes);
    
    return 0;
}
