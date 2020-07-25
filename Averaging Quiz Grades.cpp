//Kenji Hirai
//11/01/2018
//Averaging Quiz Grades

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()

{
	ifstream inFile;
	ofstream outFile;

	double student1avg, student2avg, student3avg, classAvg;
	int studentID, quiz1, quiz2, quiz3, quiz4, quiz_total, choice;

	cout << " Please enter student ID number, Quiz 1 Grade, Quiz 2 Grade , Quiz 3 Grade, Quiz 4 Grade " << endl;

	do
	{
		for (int x = 0; x < 3; x++)
		{
			cout << " Please enter student ID : ";
			cin >> studentID;
			cout << " Please enter quiz grade 1 : ";
			cin >> quiz1;
			cout << " Please enter quiz grade 2 : ";
			cin >> quiz2;
			cout << " Please enter quiz grade 3 : ";
			cin >> quiz3;
			cout << " Please enter quiz grade 4 : ";
			cin >> quiz4;
			cout << endl;

			outFile.open("quizgrades.txt");

			if (outFile.is_open())
			{
				outFile << " File successfully open ";
				outFile << studentID << " " << quiz1 << " " << quiz2 << " " << quiz3 << " " << quiz4;
				outFile.close();
			}

			else
			{
				cout << " Error opening file ";
			}

			cout << " Please enter 0 for no more students. Please enter 1 for more students. " << endl;
			cin >> choice;

			if (choice == 0)
				break;
			if (choice == 1)
				continue;
		}
	} while (choice == 1);

	inFile.close();

	outFile.close();

	cin.get();

	return(0);
}
