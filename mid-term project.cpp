//Kenji Hirai
//October 13, 2018
//CIS1111_Mid-term project
//Cell phone bill calculator


#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	string name;
	char   choice;
	int    customerNum;
	int	   minutes;
	float  bill = 0.0;

	// Ask user to input full name, customer number, phone plan, and minutes of use.
	cout << endl;
	cout << " ♪ Calculating your monthy cell phone bill ♪\n\n";
	
	cout << " Please enter your full name: ";
	getline(cin, name);
	cout << endl;

	cout << " Please enter your 4-digit customer number: ";
	cin >> customerNum;
	cout << endl;

	if (customerNum >= 1000 && customerNum < 10000)
		cout << " Thank you for your visiting!\n ";
	else
	 {
		cout << " Invalid entry. Please re-enter a 4-digit customer number: ";
		cin >> customerNum;
		cout << endl;
	 } 

	cout << "\n\n  A = For $19.99 per month 60 minutes for talk, text and web.\n";
	cout << "  	   Additional minutes are $0.40 per minutes.\n\n";
	cout << "  B = For $29.99 per month 120 minutes for talk, text and web.\n";
	cout << "  	   Additional minutes are $0.25 per minutes.\n\n";
	cout << "  C = For $39.99 per month 200 minutes for talk, text and web.\n";
	cout << "  	   Additional minutes are $0.20 per minutes.\n\n";
	cout << "  D = For $59.99 per month unlimited for talk ,text and web.\n\n";
	cout << " Please enter the phone plan you purchased: ";
	cin >> choice;
	cout << endl;
	
	cout << " How many minutes were used? ";
	cin >> minutes;
	cout << endl;

	// Calculate cost of monthly bill and additional minutes.
	switch (choice) 
	{
	case 'a':
	case 'A':  if (minutes <= 60)
		bill = 19.99;
			   else
		bill = 19.99 + ((minutes - 60) * 0.4);
		break;

	case 'b':
	case 'B':  if (minutes <= 120)
		bill = 29.99;
			   else
		bill = 29.99 + ((minutes - 120) * 0.25);
		break;

	case 'c':
	case 'C': if (minutes <= 200)
		bill = 39.99;
			  else
		bill = 39.99 + ((minutes - 200) * 0.20);
		break;

	case 'd':
	case 'D':  bill = 59.99;
		break;

	default:
	   {
		cout << " You entered invalid phone plan!\n"
			 << " Please enter plan again and choose\n"
			 << " either phone plan A, B, C, or D.\n\n";
		system("pause");
		return 0;
	   }
	}
	
	// Output.
	cout << " ★ This is your phone service monthly bill ★\n";
	cout << " ……………………………………………………………\n";
	cout << " Customer name               :   " << name << endl;
	cout << " Customer number             :   " << customerNum << endl;
	cout << " Package of subscription     :   " << choice << endl;
	cout << " Minutes used this month     :   " << minutes << " minutes " <<endl;
	cout << " Total amount due            : $ " << bill << fixed << showpoint << setprecision(2) << endl << endl;
	cout << " Thank you for choosing 携帯 service Co. " << endl << endl;
	
	system("pause");
	return 0;
}