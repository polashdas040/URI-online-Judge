#include <iostream>
using namespace std;
 
int main() {
 
    int N,highest=0,position;
    
    for(int i=0; i<100; i++){
    	cin>>N;
    	if(N>highest){
    		highest = N;
    		position = i + 1;
		}
    	
	}
	
	cout<<highest<<endl<<position<<endl;
	
    return 0;
}
