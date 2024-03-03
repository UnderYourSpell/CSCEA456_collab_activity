#include <iostream>

using namespace std;

int main()
{
	float balance = 847.92;
	unsigned int withdrawal; // Naturally must be a non-negative amount
	// Original variable boundary

	int num20s, num50s, num100s; // New additions by recent programmer to add user satisfaction
	char choice;

	cout << "Your balance is " << balance << "$" << endl;
	cout << "What denomination would you like to withdraw?\n";
	cout << "A: 20s\n";
	cout << "B: 50s\n";
	cout << "C: 100s\n";

	cin >> choice;

	if (choice == 'A' || choice == 'a')
	{
		cout << "How many 20s would you like?\n";
		cin >> num20s;

		withdrawal = num20s * 20;
	}
	else if (choice == 'B' || choice == 'b')
	{
		cout << "How many 50s would you like?\n";
		cin >> num50s;

		withdrawal = num50s * 50;
	}
	else if (choice == 'C' || choice == 'c')
	{
		cout << "How many 100s would you like?\n";
		cin >> num100s;

		withdrawal = num100s * 100;
	}
	else
	{
		cout << "Invalid response. Goodbye.\n";
		return 0; // Terminate if inappropriate input
	}

	if (balance - withdrawal < 0)
	{
		cout << "Insufficient funds";
		return 0; // Terminate if insufficient funds
	}

	/* ............Older code that was replaced by updated systems............
	cout << "How much would you like to withdraw?\n";
	cin >> withdrawal;

	if (balance - withdrawal < 0)
	{
		cout << "Insufficient funds";
		return 0; // Terminate if insufficient funds
	}
	*/

	// Across this threshold program should have already checked for sufficient balance.

	balance -= withdrawal;
	cout << "You withdrew " << withdrawal << "$" << endl;
	cout << "Your new balance is " << balance << "$" << endl;
	cout << "Thank you for using your local bank!\n";
}