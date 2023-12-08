#include <iostream>

using namespace std;

main() {
	
	char character;
	cout<<"Please enter the character: ";
	cin>>character;
	cout<<"\n";
	
	switch (character){
		case 'a':
			cout<<"VOWEL";
			break;
		case 'e':
			cout<<"VOWEL";
			break;
		case 'i':
		    cout<<"VOWEL";
		    break;
	    case 'o':
	        cout<<"VOWEL";
	        break;
	    case 'u':
	        cout<<"VOWEL";
	        break;
	        
	    default:
	        cout<<"CONSONANT!";
	    
	}

}