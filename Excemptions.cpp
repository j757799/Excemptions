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

int main() 
{
	char start = ' ';
	int offset = 0;
	
	character(start, offset);



	cout << endl << endl;
	system("pause");
	return 0;
}


void character(char start, int offset)
{
	cout << "\n\nEnter start key: ";
		cin >> start;

	cout << "\n\nEnter a number to offset (range is +- 12 from the middle M): ";
	cin >> offset;
}

void invalidCharacterExcpeption(char start)
{


}

void invalidRangeException(int)
{
}
