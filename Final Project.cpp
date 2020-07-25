// Kenji Hirai
// December 6, 2018
// CIS1111_Final Project
// Ramen Noodle Shop Report

#include<iostream>
#include <iomanip>
#include <string>

using namespace std;
void menu();
int getTotal(int[], int);
int lowestSales(int[], int);
int highestSales(int[], int);

int main()
{
	const int NUM_TYPES = 5;
	int sales[NUM_TYPES];
	string name[NUM_TYPES] = { "Tonkotsu", "Beef", "Chicken", "Miso", "Spicy Miso" };
	

	int totalNoodleSold,
		hiSalesProduct,
		loSalesProduct;

	cout << "\n @@ This is a total sales report of Ramen Noodle shop. @@  " << endl << endl;

	menu();

	// Input about noodle info

	for (int type = 0; type < NUM_TYPES; type++)
	{
		cout << "\n Please enter Ramen Noodles sold last month of " << name[type] << " Ramen : ";
		cin >> sales[type];

		while (sales[type] < 0)
		{
			cout << " Your enterd is invalid. Noodles sold must be greater than 0.  Please re-enter: ";
			cin >> sales[type];
		}
	}


	// Call functions

	totalNoodleSold = getTotal(sales, NUM_TYPES);

	loSalesProduct = lowestSales(sales, NUM_TYPES);

	hiSalesProduct = highestSales(sales, NUM_TYPES);

	// Sales report

	cout << endl << endl;
	cout << "    $$ Ramen Noodles Report $$\n\n";
	cout << " Name              Ramen Noodles Sold \n";
	cout << "_____________________________________\n";


	cout << name[0] << " " << setw(19) << sales[0] << "\n";
	cout << name[1] << " " << setw(23) << sales[1] << "\n";
	cout << name[2] << " " << setw(20) << sales[2] << "\n";
	cout << name[3] << " " << setw(23) << sales[3] << "\n";
	cout << name[4] << " " << setw(17) << sales[4] << "\n";

	cout << "\n Total Sales:" << setw(15) << totalNoodleSold << endl << endl;
	cout << " The best-selling ramen is : " << name[hiSalesProduct] << endl << endl;
	cout << " The worst-selling ramen is : " << name[loSalesProduct] << endl << endl;

	system("pause");
	return 0;
}

// Menu

void menu()
{
	string name[] = { "  Tonkotsu", "      Beef", "   Chicken", "      Miso", "Spicy Miso" };
	double price[] = { 10,10,9,10.50,12 };

	cout << "   Menu" << setw(15) << "    Price" << endl;
	cout << "   ----" << setw(15) << "  -----" << endl;

	for (int count = 0; count < 5; count++)
	{
		cout << name[count] << setw(7) << "$" << setw(5) << price[count] << endl;
	}
}

// Sales total

int getTotal(int array[], int numElts)
{
	int total = 0;

	for (int type = 0; type < numElts; type++)
		total += array[type];
	return total;
}

// Highest sales noodle

int highestSales(int array[], int numElts)
{
	int indexOfHighest = 0;

	for (int i = 1; i < numElts; i++)
	{
		if (array[i] > array[indexOfHighest])
			indexOfHighest = i;
	}
	return indexOfHighest;
}

// Lowest Sales Noodle

int lowestSales(int array[], int numElts)
{
	int indexOfLowest = 0;

	for (int i = 1; i < numElts; i++)
	{
		if (array[i] < array[indexOfLowest])
			indexOfLowest = i;
	}
	return indexOfLowest;
}
