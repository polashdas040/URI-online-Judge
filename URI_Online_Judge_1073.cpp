#include <iostream>
using namespace std;

int main() {
 
    int N,square;
    cin>>N;
    
   	for(int i=2; i<=N; i=i+2){
    			
    	if(N%2==0){
    	 square = i*i;
    	 cout<<i<<"^2 = "<<square<<endl;
    		 
			}
		}
	
    return 0;
}
