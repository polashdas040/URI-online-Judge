#include <iostream>
using namespace std;

int main()
{
	int x=7;

	for(int i=1;i<=9;i+=2)
	{
		for(int j=1; j<=3 ;j++){
	
			cout<<"I="<<i<<" J="<<x<<endl;
			x--;
		}
		x = x + 5;
		
	}
	return 0;
}
