#include <iostream>
using namespace std;
 
int main() {
 
    int N,Multiplication;
    cin>>N;
    for(int i=1; i<=10; i++){
    	Multiplication = i * N;
    	cout<<i<<" x "<<N<<" = "<<Multiplication<<endl;
    	
	}
     
    return 0;
}
