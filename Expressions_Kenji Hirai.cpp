//Kenji Hirai
//September 13, 2018
//CIS1111_Programming Assignment Topic4_Expressions
//Expressions Assignment

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

	//Defining variables

	string event;
	string name;

	int numberOfGuest;
	int numberOfminutes;
	
	cout << " Enter the name of the event. " << endl;
	cin >> event;

	cout << " Enter the customer's first and last name. " << endl;
	cin >> name;

	cout << " Enter the number of guests. " << endl;
	cin >> numberOfGuest;

	cout << " Enther the number of minutes of the event. " << endl;
	cin >> numberOfminutes;

	cout << event << endl;
	cout << " Event estimate for " << name << endl << endl;

	int numberOfserver;
	numberOfserver = static_cast<double>(numberOfGuest) / 20 + 1;
	cout << " Number of server: " << numberOfserver << endl;

	double hourlyWageForServer = 18.50;
	double remainingMinuteWage = .50;
	double hourWage = (numberOfminutes / 60) * hourlyWageForServer;
	double minuteWage = (numberOfminutes % 60) * remainingMinuteWage;

	double costPerServer = hourWage + minuteWage;
	double totalCostOfServer = costPerServer * numberOfserver;
	cout << " The cost for server: $ " << setprecision(2) << fixed << totalCostOfServer << endl;
	
	double dinnerPrice = 26.70;
	double costOfFood = numberOfGuest * dinnerPrice;
	cout << " The cost for food: $ " << setprecision(2) << fixed << costOfFood << endl;
	
	double totalCost = totalCostOfServer + costOfFood;
	cout << " Total cost is $ " << setprecision(2) << fixed << totalCost << endl << endl;

	double averageCostPerPerson = totalCost / numberOfGuest;
	cout << " Average cost per person: $ " << setprecision(2) << fixed << averageCostPerPerson << endl;

	cout << " Please provide a 25% deposit to reserve the event! " << endl;
	
	double deposit = totalCost * .25;
	cout << " The deposit is $ " << setprecision(2) << fixed << deposit << endl;

	system("pause");
	return 0;
}