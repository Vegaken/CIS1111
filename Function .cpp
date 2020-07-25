//Kenji Hirai
//11/01/2018
//CIS1111 Restaurant Functions

#include <iostream>
#include <iomanip>
using namespace std;

void showMenu();
void displayBill(float, float, float, float);
void displayChange(float, float);

int main()
{
	const double hamburgerPrice = 6.00;
	const double hotdogPrice = 4.50;
	const double peanutsPrice = 3.75;
	const double popcornPrice = 5.50;
	const double sodaPrice = 2.80;
	const double chipsPrice = 1.00;
	const double waterPrice = 2.00;
	char menuChoice;
	double bill;
	double totalBill;

	cout << "Enter menu item: \n";

	showMenu();

	cin >> menuChoice;

		do
		{
			switch (menuChoice)
			{
			case '1':
				bill = bill + hamburgerPrice;
				cout << "Enter menu item: \n";
				cin >> menuChoice;
				break;
			case '2':
				bill = bill + hotdogPrice;
				cout << "Enter menu item: \n";
				cin >> menuChoice;
				break;
			case '3':
				bill = bill + peanutsPrice;
				cout << "Enter menu item: \n";
				cin >> menuChoice;
				break;
			case '4':
				bill = bill + popcornPrice;
				cout << "Enter menu item: \n";
				cin >> menuChoice;
				break;
			case '5':
				bill = bill + sodaPrice;
				cout << "Enter menu item: \n";
				cin >> menuChoice;
				break;
			case '6':
				bill = bill + chipsPrice;
				cout << "Enter menu item: \n";
				cin >> menuChoice;
				break;
			case '7':
				bill = bill + waterPrice;
				cout << "Enter menu item: \n";
				cin >> menuChoice;
				break;
			case '8':
				exit(0);
			default:
				cout << "You did not enter a menu item! (1-8):";
				cin >> menuChoice;
				break;
			}
		}
		while (menuChoice < '8');
			
	displayChange(amtTendered, amtChangeDue);

	displayBill(bill, totalBill, tip, taxDue);

	system("pause");
	return 0;
}

void showMenu()
{
	cout << "Baseball Game Snack Menu" << endl;
	cout << "1 - hamburger    $6.00" << endl;
	cout << "2 - Hotdog       $4.50" << endl;
	cout << "3-  Peanuts      $3.75" << endl;
	cout << "4 - Popcorn      $5.50" << endl;
	cout << "5 - Soda         $2.80" << endl;
	cout << "6 - Chips        $1.00" << endl;
	cout << "7 - Water        $2.00" << endl;
	cout << "8 - END ORDER" << endl;
}


void displayBill(float bill, float totalBill, float tip, float taxDue)
{
	const double tax = 0.054;
	const double tip = 0.20;

	float taxDue = bill * tax;
	float tipDue = bill * tip;
	float totalBill = bill + taxDue + tipDue;
	
	cout << setprecision(3) << "Bill = $" << bill << endl;
	cout << "Tax = " << taxDue << endl;
	cout << "Tip = " << tipDue << endl;
	cout << setprecision(3) << "Total amount due: $" << totalBill << endl;
}

void displayChange(float amtTendered, float amtChangeDue)
{
	const double tax = 0.054;
	const double tip = 0.20;
	double bill;
	double totalBill;

	cout << "Enter Amount Tendered: " << endl;
	cin >> amtTendered;
	if (amtTendered < (bill + tip + tax))
	{
		cout << "Please enter enough to cover total bill" << endl;
		cin >> amtTendered;
	}
	else
	{
		amtChangeDue = totalBill - amtTendered;
		cout << "Change Due: $" << amtChangeDue << endl;
	}
}
