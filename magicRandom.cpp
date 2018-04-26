#include <iostream>
#include <cstdlib> 
#include <time.h>
using namespace std;

int main()
{
	int magic, guess;
	int high = 10;
	int low = 1;

	srand(time(NULL));

	magic = rand() % (high-low+1) + low;
	cin >> guess;
	if (guess==magic)
	{
		cout << "You guessed right. \n";
	}
	else
	{
		cout << "try again.\nThe answer is" << magic << "\n";
	}
	return 0;
}