#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(static_cast <unsigned int> (time(0)));
	int number;
	int tries = 0;
	cout << "\n\t\t\t\t Wlcome to the GmN game part 3";
	cout << "\n Enter your number: ";
	cin >> number;
	string checker;
	int guess = rand() % 100 + 1;
	int minNumb = 1;
	int maxNumb = 1000;
	cout << "Enter <s> to start the game: ";
	do
	{
		cin >> checker;
		if (checker == "s")
		{
			cout << " I think its " << guess;
			cout << " Your number higher or lower? (h/l)\n Or maybe i guess? (y): ";
		}
		else if (checker == "l")
		{
			maxNumb = guess;
			do 
			{
					guess = rand() % guess;
			} while (!(guess < maxNumb and guess > minNumb) and guess != 0);
			cout << " I think thats " << guess;
			cout << " Your number higher or lower? (h/l)\n Or maybe i guess? (y): ";
		}
		else if (checker == "h")
		{
			minNumb = guess;
			do 
			{
				guess = rand() % (100 - minNumb + 1) + minNumb;
			} while (!(guess > minNumb and guess < maxNumb) and guess != 0);
			cout << " I think thats " << guess;
			cout << " Your number higher or lower? (h/l)\n Or maybe i guess? (y): ";
		}
	} while (checker != "y");
	return 0;
}
