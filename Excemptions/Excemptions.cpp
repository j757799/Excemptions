//Name: Jesse Picker
//Date: x/x/2020
//Project Name: 
//Project Description:

//Libraries
#include<iostream>
#include<iomanip>
#include<string>

//Program Structure
using namespace std;

//Function prototype
void character(char, int);
void invalidCharacterExcpeption(char);
void invalidRangeException(int);
void excemptionForCharacter();

int main() 
{
	char start = ' ';
	int offset = 0;
	
	character(start, offset);

	invalidCharacterExcpeption(start);



	cout << endl << endl;
	system("pause");
	return 0;
}


void character(char start, int offset)
{
	cout << "\n\nEnter start key: ";
		cin >> start;

	cout << "\n\nEnter a number to offset (the alphabet is comprised of 26 letters, if you choose the middle letter M, the range is +- 12 from the middle): ";
	cin >> offset;


	cout << "\nStart: " << start << "\t\t" << "Offset: " << offset << endl;
}

void invalidCharacterExcpeption(char start)
{
	try{ 
		if (start == char)
		{

		}

		
	}


}

void invalidRangeException(int)
{
}
