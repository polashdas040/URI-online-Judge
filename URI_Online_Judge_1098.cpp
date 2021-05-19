#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    float a = 1;
    
    for(float i=0; i<2.2; i+=0.2){
    	for(float j=1; j<=3; j++,a++)
    	{
    		if(i==0.0){
    			cout<<"I="<<fixed<<setprecision(0)<<i<<" "<<"J="<<a<<endl;
			}
			else if(i==1.0){
    			cout<<"I="<<fixed<<setprecision(0)<<i<<" "<<"J="<<a<<endl;
			}
			else if(i>=2.0){
    			cout<<"I="<<fixed<<setprecision(0)<<i<<" "<<"J="<<a<<endl;
			}
			else{
				cout<<"I="<<fixed<<setprecision(1)<<i<<" "<<"J="<<a<<endl;
			}
		}
		a= a-2.8;

	}
 
    return 0;
}
