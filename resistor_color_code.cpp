#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int val;
int num;


// function that checks the value of the resistor
int check(int val)
{
m:
	cout << "\n\n Please select from the options: ";
	cout << "\n\n1) Black";
	cout << "\n2) Brown";
	cout << "\n3) Red";
	cout << "\n4) Orange";
	cout << "\n5) Yellow";
	cout << "\n6) Green";
	cout << "\n7) Blue";
	cout << "\n8) Violet";
	cout << "\n9) Gray";
	cout << "\n10) White";
	cout << "\n11) Silver";
	cout << "\n12) Gold";
	cout << "\n13) None";
	cout << "\n20) Exit";
	cout << "\n\n Please enter your choice: ";
	cin >> val;
	switch (val)
	{
	case 1:
		num = 0;
		break;

	case 2:
		num = 1;
		break;

	case 3:
		num = 2;
		break;

	case 4:
		num = 3;
		break;

	case 5:
		num = 4;
		break;

	case 6:
		num = 5;
		break;

	case 7:
		num = 6;
		break;

	case 8:
		num = 7;
		break;

	case 9:
		num = 8;
		break;

	case 10:
		num = 9;
		break;

	case 11:
		num = 10;
		break;

	case 12:
		num = 5;
		break;

	case 13:
		num = 20;
		break;

	case 20:
		exit(0);
		break;
	default:
		cout << "Wrong option selected!!";
		exit(0);
		break;
	}

	return num;
}

int main()
{
	char choice;

	do
	{
		int fNum;
		int sNum;
		int tNum;
		int ffNum;

		//first color
		cout << "Enter the first color of your resistor: ";

		fNum = check(val);

		//second color
		cout << "Enter the second color of your resistor: ";

		sNum = check(val);

		//third color
		cout << "Enter the third color of your resistor: ";

		tNum = check(val);

		//fourth color
		cout << "Enter the fourth color of your resistor: ";
		ffNum = check(val);

		//check for values that correspond to the last color
		if (ffNum != 20 && ffNum != 10 && ffNum != 5 && ffNum != 2)
		{
			cout << "Error: The last color must be Gold, silver, red or none";
			exit(0);
		}
		
//calculating the tolerance feature

		string fakeNum = to_string(fNum) + to_string(sNum);

		double totalNum = stoi(fakeNum) * (pow(10, tNum));

		double testNum = ffNum * 0.01;
		double frtNum = testNum * totalNum;

		double firstTNum = totalNum + frtNum;
		double secondTNum = totalNum - frtNum;

		//final output
		cout << "The reading of the resistor is " << totalNum << "Ω and it ranges from " << secondTNum << "Ω to " << firstTNum << "Ω" << endl;

		cout << "Do you want to run the program again? (y/n): ";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');

	return 0;
}
