#include <iostream>

using namespace std;

main() {
	
	int numbers[10];
	int max, min;
	for(int i=0; i<10; i++)
	{
		cout<<"Please enter the number: ";
		cin>>numbers[i];
	}
	max = numbers[0];
	min = numbers[0];
	for(int i=0; i<10; i++)
	{
		if(numbers[i]>max)
		{
			max = numbers[i];
		}
		if(numbers[i]<min)
		{
			min = numbers[i];
		}
	}
	cout<<"Max: "<<max<<endl;
	cout<<"Min: "<<min<<endl;
}