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
void character(char start, int offset);

int main() 
{
	char start;
	int offset;
	
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
	int offset;
}