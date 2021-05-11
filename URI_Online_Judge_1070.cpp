#include <iostream>
 using namespace std;

int main(){
	int X,odd;
	
	cin>>X;
	
		for(int i = X; i < X+12 ; i = i+2){
			
			if(X%2==0){
				
				odd = i + 1;
				cout<<odd<<endl;
				
			}else{
				
				odd = i;
				cout<<odd<<endl;
			}
	}
	
	return 0;
}
