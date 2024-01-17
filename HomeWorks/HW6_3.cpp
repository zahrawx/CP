#include <iostream>

using namespace std;

int gcd(int x, int y){
	if(y==0)
	return x;
	
	else
	return gcd(y,x%y);
}
main() {
	int x, y;
	std:cout<<"Enter x: ";
	std::cin>>x;
	std::cout<<"Enter y: ";
	std::cin>>y;
	
	int result = gcd(x,y);
	
	std::cout<<"The greatest common divisor (GCD) of "<<x<<" and "<<y<<" is: "<<result<<std::endl;
	
	return 0;
}