// Loops

#include <iostream>

using namespace std;

int main()
{
	//While loops. You put the condition in () just like if statements
	
	
	double BTC = 5857.468; // <<< this is the starting point of your loop. It will keep running the code until the the statement is false

		while (BTC <= 6000) // this is the ending point of your look
		{
			cout << "BTC is " << BTC << endl;

			// if you want it to stop the infinite loop at some point, you change the value of the variable so the loop can hit that spot and stop the script
			BTC = BTC + 0.004; // this is te increment
	}


		cin.get();
		return 0;
}