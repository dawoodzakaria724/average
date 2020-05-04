#include <iostream>
#include <string>

using namespace std;

int main()
{
	string firstName;
	string lastName;
	int sum = 0;
	int num = 0;
	int average = 0;

	cout << "Enter your first name: " << endl;
	cin >> firstName;

	cout << "Enter your last name: " << endl;
	cin >> lastName;

	cout << "Choose five integers to get the average of," << endl;

	for (int x = 0; x < 5; x++)
	{
		cout << "Enter an integer: " << endl;
		cin >> num;

		sum += num;
	}

	average = sum / 5;

	cout << "Hello, " << firstName << " " << lastName << "\nThe average of your five numbers is: " << average << endl;

	return 0;
}