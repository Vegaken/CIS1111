//Kenji Hirai
//11/13/2018
//CIS1111 More Function

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void playerInfo(string, int, int);
double battingAverage(int, int);

int main()
{
	string fullName;
	int hits;
	int atBats;

	playerInfo(fullName, hits, atBats);

	double bA;

	bA = battingAverage(hits, atBats);

	if (bA < .250)
	{
		cout << "The batter " << fullName << "'s batting average is " << bA << ": The player is Minor Leaguer." << endl;
	}
	if (.250 <= bA < .300)
	{
		cout << "The batter " << fullName << "'s batting average is " << bA << ": The player is All Star." << endl;
	}
	if (.300 <= bA < .400)
	{
		cout << "The batter " << fullName << "'s batting average is " << bA << ": The player is Hall of Famer." << endl;
	}
	else
	{
		cout << "The batter " << fullName << "'s batting average is " << bA << ": The player is King of Baseball." << endl;
	}
	system("pause");
	return 0;
}

	void playerInfo(string fullName, int hits, int atBats)
	{
		cout << " Enter the batter's full name: " << endl;
		cin >> fullName;

		cout << " Enter the batter's number of at hits: " << endl;
		cin >> hits;

		cout << " Enter the batter's number of bats: " << endl;
		cin >> atBats;
	}

	double battingAverage(int hits, int atBats)
	{
		double bA;
		bA = hits / atBats;
		return bA; 
	}
