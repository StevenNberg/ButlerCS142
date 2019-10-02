// Steven Nirenberg //
// 9/13/18 //
// Guessing Game Project //

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <time.h>

using namespace std;

int outputRand()
{
  return rand() % 100 + 1;

}

 int main()
 {
 	srand(time(NULL));
 	int playForever = 1;
 	string HighInsults[5] = {"Too high, Marty McFly", "So high, you're too close to the sun, Icarus", " Too high, you can touch the sky", "So high, Mount Everest looks like a dot", "Too High - what is it with you and failure?"};
 	string LowInsults[3] = {"Too low, bro", "So low, you make your credit score look high", "Too low - what is it with you and failure?"};

	while(playForever == 1)
	 {
	 	int enterNumber = 0;
	 	int computNumber = outputRand();
	 	int guessCounter = 10;

	 	cout << "*** Welcome to the Guessing Game!! ***" << endl;
	 	cout << "I have a number between 1 and 100. Can you guess it?" << endl;
	 	cout << "if you have thin skin and want out of this never ending cycle of pain, enter -1" << endl;
	

	 	while(enterNumber != -1 && enterNumber != computNumber)
	 	{
	 		cout << "Guess: ";
	 		cin >> enterNumber;
	 		if(enterNumber > computNumber && enterNumber <=100 )
	 		{
				cout << HighInsults[rand() % 5] << endl;
	 		}
	 		else if(enterNumber < computNumber && enterNumber > -1)
	 		{
	 			cout << LowInsults[rand() % 3] << endl;
	 		}
	 		else if(enterNumber < -1)
	 		{
	 			cout << "Hey, i know what you're doing. Don't you dare try to break me.I will hunt you down." << endl;
	 		}
	 		else if(enterNumber >= 101)
	 		{
	 			cout << "Hey, i know what you're doing. Dont you dare try to break me. I will hunt you down." << endl;
	 		}
	 	}
	 		if(enterNumber == computNumber)
	 		{
	 			cout << "You win!!" << endl;
	 		}

	 		else if(enterNumber == -1)
	 		{
	 			cout << "see you later quitter" << endl;
	 		}
	 		
	 		cout << "Would you like to play again? Enter 1 to keep playing. Enter 0 to quit: ";
	 		cin >> playForever;
	}
 	cout << "Run away you spineless human thing. But do come back!" << endl;
	
	 return 0;
 }