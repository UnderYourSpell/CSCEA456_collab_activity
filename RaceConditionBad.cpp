#include <iostream>
#include <thread>
#include <cmath>

using namespace std;

int balance = 0;
int incCounter = 0;
int numRuns = 5000;

void Charge()
{
    for (int i = 0; i < numRuns; i++)
    {
        balance += i;
        incCounter++;

        int j = sqrt(numRuns); // Represents arbitrary work done during the charging state.
    }
}

void Process()
{
    for (int i = 0; i < numRuns; i++)
    {
        if (i >= incCounter) // Ensures we don't try to process a transaction before it is charged.
        {
            i --;
            continue;
        }

        balance -= i;
        int j = sin(numRuns); // Represents arbitrary work done during the processing state.
    }
}

int main()
{
    cout << "The starting ledger balance is " << balance << "$" << endl << "." << endl;

    thread t1(Charge); // Represents charging lots of transactions throughout a day.
    thread t2(Process); // Represents settling/processing transactions throughout a day.

    t1.join();
    t2.join();

    if (balance < 0)
        cout << "Something wrong with the accounting department. Better do an audit..." << endl << "." << endl;
    else if (balance > 0)
        cout << "Nice. You were able to steal excess balance of " << balance << "$ due to a race condition!" << endl << "." << endl;
    else
        cout << "Business as usual. Glad our processing service is so robust!" << endl << "." << endl;
}