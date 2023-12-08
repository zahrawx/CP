#include <iostream>

using namespace std;

main() {
	
	float rights;
	cout<<"Please enter your rights: ";
	cin>>rights;
	cout<<"\n";
	
	if (rights < 6000000){
		cout<<"rights after tax deduction: "<<fixed<<rights;
	}
	else if (rights >= 6000000 && rights < 8000000){
		cout<<"rights after tax deduction: "<<fixed<<(float)rights * 0.95;
	}
	else if (rights >= 8000000 && rights < 10000000){
		cout<<"rights after tax deduction: "<<fixed<<(float)rights * 0.90;
	}
	else if (rights >= 10000000 && rights < 14000000){
		cout<<"rights after tax deduction: "<<fixed<<(float)rights * 0.85;
	}
	else if (rights >= 14000000 && rights < 18000000){
		cout<<"rights after tax deduction: "<<fixed<<(float)rights * 0.80;
	}
	else if (rights >= 18000000 && rights < 25000000){
		cout<<"rights after tax deduction: "<<fixed<<(float)rights * 0.75;
	}
	else if (rights >= 25000000){
		cout<<"rights after tax deduction: "<<fixed<<(float)rights * 0.65;
	}
}
		