// Steven Nirenberg //
// October 24 2018 //
// Candy Project //

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <time.h>
#include <fstream>

using namespace std;

void SaveToFile(int array[], int number)
{
	// saves candy inventory to a file 

	ofstream outputFileStream;
	
	outputFileStream.open("candyStorage.txt");
	
	outputFileStream.setf(ios::showpoint);
	outputFileStream.setf(ios::fixed);	
	outputFileStream.precision(2);
	
	for(int loopvariable = 0; loopvariable < number; loopvariable++)
	{
	 
		outputFileStream << array[loopvariable] << char(13) << char(10) ;
	}

	cout << "file saved" << endl;
	outputFileStream.close();
}
void ReadInCandy (int array[], int number)
{
	// loads in file that has candy inventory saved

	ifstream fileToReadIn;
	
	fileToReadIn.open("candyStorage.txt");
	
	for(int loopvariable = 0; loopvariable < number; loopvariable++)
	{	

		fileToReadIn >> array[loopvariable];
	}
	cout << "file loaded" << endl;
	fileToReadIn.close();
}


void trickOrTreat(int countCall, int countCandy[])
{
	// countCall is the name of variable that holds the number which dictates which type of candy user received
	// adds one candy to each entered candy, as if user went trick or treating

	if(countCall != -1)
	{

		countCandy[countCall -1]++;
	}
	cout << "Number of Candy Corn received: " << countCandy[0] << endl
		<< "Number of Licorice received: " << countCandy[1] << endl
		<< "Number of Jawbreaker received: " << countCandy[2] << endl
		<< "Number of Peanutbutter Cups received: " << countCandy[3] << endl
		<< "Number of M&M's received: " << countCandy[4] << endl
		<< "Number of 'other' candy received: " << countCandy[5] << endl;

}
void eatingCandy(int candyEaten, int countCandy[])
{
	// function takes one candy away, "eaten"

	if(candyEaten != -1)
	{
		// candyTypes [1] gets candy corn
		// candyTypes [2] gets licorice
		// candyTypes [3] gets Jawbreaker
		// candyTypes [4] gets Peanutbutter Cups
		// candyTypes [5] gets M&M's
		// candyTypes [6] gets Other

		if(countCandy[candyEaten-1]==0)
		{
			cout << "sorry, you do not have any of this candy to eat" << endl;
		}
		else
		{
			countCandy[candyEaten -1]--;
		}

	}
	cout << "Number of Candy Corn eaten: " << countCandy[0] << endl
		 << "Number of Licorice eaten: " << countCandy[1] << endl
		 << "Number of Jawbreaker eaten: " << countCandy[2] << endl
		 << "Number of Peanutbutter Cups eaten: " << countCandy[3] << endl
		 << "Number of M&M's eaten: " << countCandy[4] << endl
		 << "Number of 'other' candy eaten: " << countCandy[5] << endl;
}
void typesOfCandy()
{
	// lists the types of candy

	cout << "Here are types of candy types:" << endl
		 << "-Candy Corn" << endl
		 << "-Licorice" << endl
		 << "-Jawbreaker" << endl
		 << "-Peanutbutter Cups" << endl
		 << "-M&M's" << endl
		 << "-Other" << endl;
}
void commandMenu()
{
	// prints out the command menu first seen at the beginning of the program

	cout << "Here is a list of commands" << endl << endl << endl;
	cout << "E - Eat a piece of candy" << endl
		 << "T- Trick or Treat: get a piece of candy" << endl
		 << "I - Inventory listing" << endl
		 << "C - list candy types" << endl
		 << "M - Print this menu of commands" << endl
		 << "S - Save to the file candy.dat" << endl
		 << "L - Load from the file candy.dat" << endl
		 << "Q - Quit this program" << endl;
}
void candyInventory(int candyData[])
{
	// prints out current candy inventory, or candy user has, and adds each value to create a total amount value.

   cout << "This is what you currently have:" << endl;
   cout << "Number of Candy Corn: " << candyData[0] << endl
		<< "Number of Licorice: " << candyData[1] << endl
		<< "Number of Jawbreaker: " << candyData[2] << endl
		<< "Number of Peanutbutter Cups: " << candyData[3] << endl
		<< "Number of M&M's: " << candyData[4] << endl
		<< "Number of 'other' candy: " << candyData[5] << endl << endl;
	cout << "Your total amount of candy is: " << candyData[0] +candyData[1] + candyData[2] + candyData[3] + candyData[4] + candyData[5] << endl;

}

int main()
{
	string nameOfFile = " ";
	ifstream inputFileStream;
	int candyTypes[6] = {0};
	char choice = 'Z';
	int countCall = 0;

	cout << "** Welcome to the Candy Database Program! **" << endl << endl;
	cout << "Here is a list of commands" << endl << endl << endl;
	cout << "E - Eat a piece of candy" << endl
		 << "T- Trick or Treat: get a piece of candy" << endl
		 << "I - Inventory listing" << endl
		 << "C - list candy types" << endl
		 << "M - Print this menu of commands" << endl
		 << "S - Save to the file candy.dat" << endl
		 << "L - Load from the file candy.dat" << endl
		 << "Q - Quit this program" << endl;

	while (choice != 'Q' && choice != 'q' )
	{
		cout << "What has happened? ";
		cin >> choice;

		if(choice == 'T' || choice == 't' )
		{
			cout << "You have recieved a piece of candy." << endl
				 << "Which candy did you get?" << endl
				 << "1. Candy Corn, 2. Licorice, 3. Jawbreaker, 4. Peanutbutter Cups, 5. M&M's, 6. Other" << endl;

			int candyChosen = 0;
			cin >> candyChosen;
			trickOrTreat(candyChosen, candyTypes);
		}
		else if(choice == 'E' || choice == 'e' )
		{
			cout << "You have elected to eat a piece of candy!" << endl
				 << "Which candy did you eat" << endl
				 << "1. Candy Corn, 2. Licorice, 3. Jawbreaker, 4. Peanutbutter Cups, 5. M&M's, 6. Other" << endl;

			int candyChosen = 0;

			cin >> candyChosen;
			eatingCandy(candyChosen, candyTypes);
		}
		else if(choice == 'S' || choice == 's' )
		{
			SaveToFile(candyTypes, 6);
		}
		else if(choice == 'L' || choice == 'l' )
		{
			ReadInCandy(candyTypes, 6);
		}
		if(choice == 'C' || choice == 'c' )
		{
		typesOfCandy();
		}
		if(choice == 'M' || choice == 'm' )
		{
		commandMenu();
		}
		if(choice == 'I' || choice == 'i' )
		{
		candyInventory(candyTypes);
		}

	}
	cout << "Enjoy your trip to the dentist!" << endl;

	return 0;
}