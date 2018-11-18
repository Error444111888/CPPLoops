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
			BTC++; // this is te increment of 1 everytime
	}

		cout << "END OF THIS PROGRAM \n" << endl;

///////////////////
// This is a built calculator with a while loop
		double Total_BTC;

		double total = 0.00;
		int Total_Entries = 1;


		while (Total_Entries <= 4) //<<< It will go on until it hits 4 times
		{
			cout << "Enter a number: ";
			cin >> Total_BTC;

			total = total + Total_BTC; //<<< You want to add the new number to the total everytime. That's why you do total + Total_BTC

			Total_Entries++; //<<< This basically sends it back to the begining of the loop with an extra 1 added to it


		}

		cout << "Your total number is " << total << endl; // <<< if this line was in line 38 it would show the total every time you enter a number until the loop stops
		cout << "END OF THIS PROGRAM \n" << endl;
	

//////////////////////////
//This one calculates the avarage of all numbers

		//This is going to calculate the avarege USD price of all entered CryptoCurrencies
		double CryptoPrice;
		double TotalAmount = 0;
		double Entries = 0;


		cout << "First Crypto Price: " << endl;
		cin >> CryptoPrice;

		while (CryptoPrice != -1) //<<< If Crypto Prices is not equals to -1 then keep running it again and again
		{
			
			TotalAmount += CryptoPrice; 
			Entries++; 

			cout << "A new Crypto USD Price: ";
			cin >> CryptoPrice;

		}

		cout << "Your total crpyto amount is:  " << TotalAmount << endl;
		cout << "Your avarage number is: " << TotalAmount / Entries << endl;
		cout << "Your total number of entries are: " << Entries << endl;





		cin.get();
		return 0;
}