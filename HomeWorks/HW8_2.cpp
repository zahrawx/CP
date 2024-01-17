#include <iostream>

using namespace std;

main() {
	
	int A[5], B[5], C;
	for(int i=0; i<5; i++)
	{
		cin>>A[i];
	}
	for(int i=0; i<5; i++)
	{
		cin>>B[i];
	}
	for(int i=0; i<5; i++)
	{
		C = A[i];
		A[i] = B[i];
		B[i] = C;
		cout<<A[i]<<"\t" <<B[i]<<endl;
	}
}