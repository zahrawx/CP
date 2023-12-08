#include <iostream>

using namespace std;

 main() {
 	
 	float num1,num2,result;
 	
 	cout<<"Please enter the first number: ";
 	cin>>num1;
 	cout<<"Please enter the second number: ";
 	cin>>num2;
 	
 	result=num1+num2;
 	cout<<"\n\n";
 	cout<<"num1 + num2 = "<<result<<"\n\n";
 	
 	result=num1-num2;
 	cout<<"num1 - num2 = "<<result<<"\n\n";
 	
 	result=num1*num2;
 	cout<<"num1 * num2 = "<<result<<"\n\n";
 	
 	result=(int)num1%(int)num2;
 	cout<<"num1 % num2 = "<<result;
 	
}