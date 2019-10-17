#include <iostream>
using namespace std;

int main()
{

	int H;
	int J;
	bool keepgoing = true; 
	int answer;
	for (int loop = 0; loop < 10; loop++)
	{
		cout << loop << "\n";
	}
	while (keepgoing)
	{


		cout << "enter a number: ";
		cin >> H; // inputing a number for H variable.
		cout << "you entered " << H << " . Enter another number";
		cin >> J;

		if (H < J)
		{
			cout << " the first number, " << H << ", is less than" << J << endl;
		}
		if (H == J)
		{
			cout << "The first number, " << H << ", is equal to " << J << endl;
		}
		if (H > J)
		{
			cout << "the first number, " << H << ", is greater than, " << J << endl;

		}
		cout << "Do you want to keep going? enter 0 for no: ";
		cin >> answer;
		if (answer == 0)
		{
			keepgoing = false;
		}
	}
}
