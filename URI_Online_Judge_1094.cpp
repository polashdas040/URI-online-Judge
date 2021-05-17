#include <iostream> 
#include <iomanip>
using namespace std;
 
int main() {
	int N,C=0,R=0,S=0,Amount,Total;
	float c,r,s;
	char ch;
	cin>>N;
	
	for(int i=0; i<N; i++){
		cin>>Amount>>ch;
			if(ch=='C'){
				C += Amount;
			}
			if(ch=='R'){
				R += Amount;
			}
			if(ch=='S'){
				S += Amount;
			}
		}
	
	Total = C + R + S;
	c = (C*100.0)/Total;
	r = (R*100.0)/Total;
	s = (S*100.0)/Total;
	
	cout<<"Total: "<<Total<<" cobaias"<<endl;
	cout<<"Total de coelhos: "<<C<<endl;
	cout<<"Total de ratos: "<<R<<endl;
	cout<<"Total de sapos: "<<S<<endl;
	cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<c<<" %"<<endl;
	cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<r<<" %"<<endl;
	cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<s<<" %"<<endl;

    return 0;
}
