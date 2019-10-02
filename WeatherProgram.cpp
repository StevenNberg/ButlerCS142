// ********************************************************************************* //
// Steven Nirenberg //
// 9/6/2018 // 
// Weather Program Project //
// ************************************************** //
 
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

 int main()
 {
     int tempOutside = 0.0;

     float convertedAnswer =0.0;

     cout << "Welcome to the UNWEDGE Weather Program! " <<endl;
	 
     cout << "Please enter the temperature, of the enviornment you are currently in, in Farenheit. " << endl;
	
     cin >> tempOutside;

     // cout << if statement right here //  
	 if(tempOutside >= 85)
	 {
		cout << "Holy h*ck it is hot outside. Drink some water!" << endl;
	 }
	 else if(tempOutside <= 20)
	 {
			cout << "Holy h*ck it is freezing outside!" << endl;
	 } 
	 
	 convertedAnswer = (5.0/9.0) * (tempOutside - 32);

     cout << "The temperature of your current environment is " << fixed << setprecision(3) << convertedAnswer << " degrees centigrade." << endl;
	 
     cout << "Have a nice day!" << endl;

     return 0;

}

