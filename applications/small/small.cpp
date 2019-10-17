
#include <iostream> //library stream I/O. this is needed to gain access to library
using namespace std; //allows us to not have to type std:: in fornt of stuff.

int main()
{
    std::cout << "Hello World!\n";
	std::cout << "My name is Hunter and this is my first application\n";
	std::cout << 2 + 2;
	std::cout << std::endl;
	std::cout << "I love coding\n" << 6 / 3 << "+" << 2 + 7 - 1 << "=" << 5*2;
	std::cout << std::endl;
	std::cout << "C++ is fun";
	cout << endl << endl;

	int i; // use 'int' to declare a integer variable. 
	i = 8;
	cout << i << endl;
	int H = 4;
	int K = 2;
	float O = 9.0 / 5; //have to use a float here because the sum is a float.
	string S = " is equal to "; // declaring a string variable
	cout << H + K << endl << (i + H) * K << endl;
	cout << O << endl;
	cout << H << "+" << K << S << 4 + 2 << endl;

	auto T=4.9;
	auto L="hello";
	


}

