#include <iostream>

using namespace std;

int main()
{

	int answer = 45;
	int guess;
	bool notguessed = true;
	while (notguessed)
	{
		cout << "guess my number 1-100: ";
		cin >> guess;
		if (guess == answer)
		{
			cout << "yes!" << endl;
			notguessed = false;

		}
		if (guess < answer)
		{
			cout << "too low" << endl;
		}
		if (guess > answer)
		{
			cout << "too high" << endl;
		}
	}
}