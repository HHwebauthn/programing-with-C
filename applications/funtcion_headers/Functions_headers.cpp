#include <iostream>
#include "CppFunctions.h"
using namespace std;

int main()
{
	int H;
	int K;
	int J;
	auto a = add(3, 4);
	cout << "3 + 4 is " << a;
	double b = add(1.2, 3.4);
	cout << endl;
	cout << "1.2 + 3.4 is " << b;

	cout << endl;
	auto c = add(1.1, 2.2, 3.3);
	cout << "1.1 + 2.2 + 3.3 is " << c;
	cout << endl;



	cout << "enter in first number: ";
	cin >> H;
	cout << "enter in second number: ";
	cin >> J;
	cout << "enter in last number: ";
	cin >> K;
	cout << "total is = " << add(H, J, K) << endl;

	if (test(true))
	{
		cout << "true passes the test" << endl;
	}
	if (test(3.2))
	{
		cout << "3.2 passes the test" << endl;
	}
}