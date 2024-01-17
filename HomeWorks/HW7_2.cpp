#include <iostream>

using namespace std;

main() {
	
	int m, n, i;
	cout<<"Please enter your number: ";
	cin>>m;
	cout<<"Please enter the divisor number: ";
	cin>>n;
	for (i=0; n<=m ; i++){
		m = m - n;
	}
	cout<<"Remainder is: "<<m <<endl;
	cout<<"Quotient is: "<<i;

}