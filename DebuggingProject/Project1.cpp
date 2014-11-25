// This program averages a series
// of numbers, except that it contains
// a fatal bug.

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char *pszArgs[])
{
	cout << "This program is designed to crash!"
		   << endl;

	int nSum;
	int nNums;

	// accumulate input numbers until the
	// user enteres a negative number, then
	// return the average
	nNums = 0;
	while(true)
	{
		// Debugging Output to check if values are as expected.
		cout << “nNums = “ << nNums << endl;
		
		
		// enter another number to add
		int nValue;
		cout << "Enter another number:";
		cin >> nValue;
		cout << endl;

		// if the input number is negative...
		if(nValue < 0)
		{
			// ... then output the average
			cout << "Average is: "
				 << nSum/nNums
				 << endl;
			break;
		}

		// not negative, add the value to
		// the accumulator
		nSum += nValue;
	}

	cin.ignore(10000, '\n');
	return 0;
}
