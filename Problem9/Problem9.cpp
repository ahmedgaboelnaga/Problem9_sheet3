#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	const int totalnubmers = 100;

	for (int i = 1; i <= totalnubmers; i++)
	{
		sum += i;
	}

	int average = sum / totalnubmers;

	cout << "The average is: " << average;
	return 0;
}
