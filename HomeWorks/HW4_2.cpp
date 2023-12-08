#include <iostream>

using namespace std;

main() {

	float x,y,z;
	int sorat,makhrag;
	cout<<"Please enter value for x: ";
	cin>>x;
	cout<<"Please enter value for y: ";
	cin>>y;
	cout<<"Please enter value for z: ";
	cin>>z;
	cout<<"\n";
	sorat=(x-y) * (x+z);
	makhrag=(x + y + z) * (x + y + z) + 1;
	cout<<"result is: "<<(float) sorat / makhrag;
}