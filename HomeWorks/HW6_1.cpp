#include<iostream>
#include<cmath>

using namespace std;

double calculateTerm(double x, int n){
	double numerator = std::pow(x, 2*n-1);
	double denominator = 1;
	for(int i=1; i<=2*n-1; ++i){
		denominator*=i;
	}
	double term = numerator/denominator;
	if(n%2==0){
		term*=-1; //جملات زوج دارای علامت منفی  هستند
}
    return term;
}
double calculateTangent(double x, int numTerms){
	double tangent=0.0;
	for(int n=1; n<=numTerms; ++n){
		
		double term = calculateTerm(x,n);
		tangent+=term;
	}
	return tangent;
}
main() {
	double x;
	std::cout<<"Enter a number: ";
	std::cin>> x;
	
	double tangent= calculateTangent(x,10);
	
	std::cout<<"The tangent of "<<x<<" is: "<<tangent<<std::endl;
	
	return 0;
}