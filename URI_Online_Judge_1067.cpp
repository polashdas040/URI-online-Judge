#include <iostream> 
using namespace std;
 
int main() {

	int X;
	
	cin>>X;
	
	if(1 <= X && X <= 1000){
		
		for(int i = 1; i <= X ; i = i+2){
			
				cout<<i<<endl;
			}
		}
    return 0;
}