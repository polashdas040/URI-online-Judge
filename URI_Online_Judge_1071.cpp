#include <iostream>
using namespace std;
 
int main() {
 
    int x,y,z,sum=0;
    
    cin>>x>>y;
       
    if(x>y){
    	z = x;
    	x = y;
    	y = z;
    	
	}
	
	if(x==y){
		cout<<"0"<<endl;
	}
	else{
		if(x%2==0){
		x++;
		
			for(int i=x; i<y; i=i+2){
			sum = sum + i;
			}
	}
	
		else{
			x = x +2;
			for(int i=x; i<y; i=i+2){
			sum = sum + i;
		
			}
		}
    
    cout<<sum<<endl;
	}
	
 
    return 0;
}
