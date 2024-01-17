#include<iostream>
#include<cmath>

using namespace std;

double power(double x, int y){
	if(y==0)
	return 1;
	else if(y%2==0){
		double temp = power(x,y/2);
		return temp*temp;
	} else{
		double temp=power(x,(y-1)/2);
		return x*temp*temp;
	}
}

main() {
	double x;
	int y;
	std::cout<<"Enter x: ";
	std::cout<<"Enter y: ";
	std::cin>>y;
	
	double result = power(x,y);
	
	std::cout<<x<<" raised to the power of "<<y<<" is: "<<result<<std::endl;
	
	return 0;
}