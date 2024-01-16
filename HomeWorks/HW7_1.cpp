#include <iostream>

using namespace std;

main() {
	
	    int m,n;
	    int result = 1;
	    cout<<"Please enter your number: ";
	    cin>>m;
	    cout<<"Please enter your number: ";
	    cin>>n;
	    for (int i=1; i<=n;i++){
		result = result * m;
	    }
	    cout<<result;
}