#include <iostream>

using namespace std;

main() {
	
	int n;
	cout<<"Please enter your number: ";
	cin>>n;
	for(int i=2; i<=n/2;i++){
		if(n%i==0)
		cout<<i <<endl;
	}
	
}