#include <iostream>
#define ARREY_SIZE 10

using namespace std;

main() {
	
	int A[ARREY_SIZE] = {18,29,35,48,51,69,72,88,93}, tmp;
	cout<<"Please enter a number: ";
	cin>>A[9];
	for(int i=1; i<ARREY_SIZE; ++i)
	{
		for(int j=0; j<(ARREY_SIZE-i); ++j)
		{
			if(A[j]>A[j+1])
			{
				tmp = A[j];
				A[j] = A[j+1];
				A[j+1] = tmp;
			}
		}
	}
	for(int i=0; i<10; i++)
	{
		cout<<A[i]<<" ";
	}
	
}