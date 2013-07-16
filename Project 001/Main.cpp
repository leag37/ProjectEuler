// Problem 1
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>

using namespace std;

int main()
{
	// Sum
	unsigned int sum = 0;

	// Loop between 1 and 999 inclusive
	for(unsigned int i = 1; i < 1000; ++i)
	{
		// If it's a multiple of 3 or 5, add
		if(i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	cout << "Answer: " << sum << endl;
	cin.ignore(1);
	return 0;
}