#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>

using namespace std;
//
struct int_string
{
	int num;
	string heads[6];
};

int main()
{
	int_string chart1[13][6];
	int m = 0;


	ifstream visitFile("Visitors.txt");
	ifstream monthFile("Months.txt");
	
	{
		visitFile.open;
		monthFile.open;

		while (m < 13 && monthFile >> chart1[13][6])
			m++;

		for (int r = 0; r < 13; r++)
			for (int c = 0; c < 6; c++)
				visitFile >> chart1[13][6];

		for (int x = 0; x < 13; x++)
			for (int y = 0; y < 6; y++)
				cout << chart1[x][y];
	}
	system("pause");
	return 0;
}