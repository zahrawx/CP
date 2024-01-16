#include <iostream>

using namespace std;

main() {
	
	int m, n, result;
	cout<<"Please enter two integer numbers: ";
	cin>>m >>n;
	
	if(n > m){
		int a = n;
		n = m;
		m = a;
	}
	
	for(int i=1; i<=n; i++){
		if(m % i == 0 && n % i == 0){
			result = i;
		}
	}
	cout<<result;
}