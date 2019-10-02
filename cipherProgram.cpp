// Steven Nirenberg
// Caeser cipher program



#include <iostream>
#include <iomanip>

using namespace std;

void PrintWords(string words[], int numberOfWords)
{
	cout << "Your encryted message is: ";
	for(int loopVariable = 0; loopVariable < numberOfWords; loopVariable++)
	{
		cout << words[loopVariable] << " "; 
	}
}

void ShiftLowercase(string arrayOfFoundWords[], int numberOfWordsFound)
{
	int lengthOfWord = -1;
	string singleWord = "";
	
	for(int loopVariable = 0; loopVariable < numberOfWordsFound; loopVariable++)
	{
		singleWord = arrayOfFoundWords[loopVariable];
		lengthOfWord = singleWord.length();
		
				
		for(int loopVariableTwo = 0; loopVariableTwo < lengthOfWord; loopVariableTwo++)
		{
			if( ( 97 <= singleWord[loopVariableTwo] ) && (singleWord[loopVariableTwo] <= 119))
			{
				singleWord[loopVariableTwo] = singleWord[loopVariableTwo] + 3;
			}
			else if( ( 120 <= singleWord[loopVariableTwo] ) && (singleWord[loopVariableTwo] <= 122))
			{
				singleWord[loopVariableTwo] = singleWord[loopVariableTwo] - 23;
			}

		} 
		
		arrayOfFoundWords[loopVariable] = singleWord;
	}
}

void ShiftUppercase(string arrayOfFoundWords[], int numberOfWordsFound)
{
	int lengthOfWord = -1;
	string singleWord = "";
	
	for(int loopVariable = 0; loopVariable < numberOfWordsFound; loopVariable++)
	{
		singleWord = arrayOfFoundWords[loopVariable];
		lengthOfWord = singleWord.length();
		
				
		for(int loopVariableTwo = 0; loopVariableTwo < lengthOfWord; loopVariableTwo++)
		{
			if( ( 65 <= singleWord[loopVariableTwo] ) && (singleWord[loopVariableTwo] <= 87))
			{
				singleWord[loopVariableTwo] = singleWord[loopVariableTwo] + 3;
			}
			else if( ( 88 <= singleWord[loopVariableTwo] ) && (singleWord[loopVariableTwo] <= 90))
			{
				singleWord[loopVariableTwo] = singleWord[loopVariableTwo] - 23;
			}
		}
		
		arrayOfFoundWords[loopVariable] = singleWord;
	}
}


int main()
{
	string wholeLine = "";
	int locationOfSpace = -1;
	string arrayOfFoundWords[100];
	int numberOfWordsFound = 0;

	cout << "hello welcome to the caeser cipher program"
		 << "Do what the following prompt tells you what to do. Have fun" << endl;
	
	cout << "Please enter the whole line = " ;
	getline(cin,wholeLine);
	
	while (wholeLine.length() != 0)
	{
		if(wholeLine[0] == ' ')
		{
			wholeLine.erase(0,1);
		}
		else
		{
			locationOfSpace = wholeLine.find(" ");			
			
			arrayOfFoundWords[numberOfWordsFound] = wholeLine.substr(0,locationOfSpace);
			numberOfWordsFound++;
			
			wholeLine.erase(0,locationOfSpace);
		}
		
	}
	
	ShiftLowercase(arrayOfFoundWords, numberOfWordsFound);
	

	ShiftUppercase(arrayOfFoundWords, numberOfWordsFound);
	

	PrintWords(arrayOfFoundWords, numberOfWordsFound);
	
	cout << endl;

	cout << "Thank you for using this program, see you later" << endl; 
	

	return 0;
}