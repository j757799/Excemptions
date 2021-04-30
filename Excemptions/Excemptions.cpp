//Name: Jesse Picker
//Date: x/x/2020
//Project Name: 
//Project Description:

//Libraries
#include<iostream>
#include<iomanip>
#include<string>
#include<cctype>


//Program Structure
using namespace std;

//Function prototype
char character(char);
int offset(int);

int main() 
{
	char start = ' ';
	int alphaoffset = 0;
	char characterReceived;
	int intReceived;
	
	cout << "\n\nEnter start key: ";
	cin >> start;

	cout << "\n\nEnter a number to offset (the alphabet is comprised of 26 letters, if you choose the middle letter M, the range is +- 12 from the middle): ";
	cin >> alphaoffset;

	try
	{
		characterReceived = character(start);
	}
	catch (string characterExemption)
	{
		cout << characterExemption;
	}

	try
	{
		intReceived = offset(alphaoffset);
	}
	catch (string characterExemption)
	{
		cout << characterExemption;
	}

	cout << "\n\nHere is what you entered:\n\n\nStart: " << start << "\t\t" << "Offset: " << offset << endl;
	cout << endl << endl;
	system("pause");
	return 0;
}


char character(char start)
{
	string characterExemption = "\nERROR: This is a thrown exemption for improper character input\n\nYou must enter a letter of the alphabet as a start key\n\n\nPROGRAM SELF DESTRUCTING....................AAAAAHHHHHHHHHHHHHHHH";
	string exceptionString = "\nERROR: must enter a letter of the alphabet.";
	
		if (isalpha(start))
		{
			return start;
		}
		else
		{
			throw characterExemption;
		}
}

int offset(int offset)
{
	string integerException = "\nERROR: This is a thrown exception for improper offset input\n\nYou must enter an offset number that doesn't extend beyond the maximum allowed by an alphabet comprised of 26 letters\n\n\nPROGRAM SELF DESTRUCTING....................AAAAAHHHHHHHHHHHHHHHH";
	

	if (offset )
	{
		/*return start;*/
	}
	else
	{
		throw integerException;
	}

}
