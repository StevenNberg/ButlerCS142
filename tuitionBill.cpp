// Program: Tuition Bill Program //
// Author: Steven Nirenberg //
// Date Due: 9/12/18








#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

 int main()
 {
 	int creditHours = 0;
 	float tuitionHours = 0.0;
 	float totalBill = 0.0;
	int overLoad = 0;
	float moreMoney = 0.0;

 	cout << "** Wlecome to the Tuition Bill Program! **" << endl;
 	
 	while(creditHours != -1)
 	{
 		cout << "How many credits? (-1 to exit): ";
 		cin >> creditHours;

 		if(creditHours != -1)
 		{
 			
			if((creditHours >=0) && (creditHours <= 11))
			{
				tuitionHours = 1502.00;
				cout << tuitionHours << endl;
				totalBill = creditHours * tuitionHours;
			

			}
			else if((creditHours >=12) && (creditHours <=20))
			{
				tuitionHours = 18025.00;
				cout << tuitionHours << endl;
				totalBill = creditHours * tuitionHours;


			}
			else if(creditHours >=21)
			{
				overLoad = creditHours - 20;
				tuitionHours = 18025.00;
				moreMoney = overLoad * 1502.00;
				totalBill = creditHours * tuitionHours + moreMoney;

			}
			cout << "The tuition bill is $" << fixed << setprecision(2) << totalBill << "." << endl;
		}
 	}
 	
cout << "Good luck paying your bills! psst, your debt dies with you." << endl;

return 0;

 }