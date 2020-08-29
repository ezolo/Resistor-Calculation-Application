/* Name: Eva Zolotarev
Program Title: Resistance is Everything
Program Description:
1.The following program should allow the user to input two resistances and calculate "resistors placed in series" and "resistors placed in parallel".
*/

#include <iostream>

using namespace std;

int main()
{
	cout << "Welcome to the Resistor Calculation Program!";

	cout << "\n\nPlease enter your 1st resistance:";
	short resistorOne;
	cin >> resistorOne;

	cout << "\n\nPlease enter your 2nd resistance:";
	short resistorTwo;
	cin >> resistorTwo;

	cout << "\n\nThank you! You've entered " << resistorOne << " ohms and " << resistorTwo << " ohms. Calculating...\nDone.";
	short seriesValue = resistorOne + resistorTwo;

	double parallelValue = 1.0 / ((1.0 / resistorOne) + (1.0 / resistorTwo));

	cout << "\n\nIf your resistors are placed in series, they'll total to: " << seriesValue << " ohms.";
	cout << "\n\nIf they are placed in parallel, they'll total to: " << parallelValue << " ohms.";
	cout << "\n\nThank you for using the RCP!!";
	cout << "\n\nEndeavor to have a blossoming day!";

	return 0;
}