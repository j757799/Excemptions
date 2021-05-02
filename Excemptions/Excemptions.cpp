//Name: Jesse Picker
//Date: 5/2/2021
//Project Name: Exceptions #15a
//Project Description: Calculate character offsets, throwing exceptions in error conditions.

//Libraries
#include<iostream>
#include<iomanip>
#include<string>
#include<cctype>


//Program Structure
using namespace std;

struct alphaOffset
{
	char start;
	int alphaoffset;
};

//Function prototype
//char character(char);
//int offset(int);
alphaOffset returnValues(alphaOffset);

int main() 
{
	char start = ' ';
	int alphaoffset = 0;
	alphaOffset set;

	string error = "\n\nERROR";

	
	cout << "\n\nEnter start key: ";
	cin >> set.start;

	cout << "\n\nEnter a number to offset (the alphabet is comprised of 26 letters, if you choose an offset which falls outside of what is allowed, I will throw an exception): ";
	cin >> set.alphaoffset;


	cout << "\n\nCalling the function: \n";

	try
	{
		alphaOffset setReturned = returnValues(set);
		cout << "\n\nHere is what you entered:\n\n\nStart: " << set.start << "\t\t" << "Offset: " << set.alphaoffset << endl;
		cout << "\n\nHere is the result: " << setReturned.start << endl;
	}
	catch (string error)
	{
		cout << error;
	}

	cout << endl << endl;
	system("pause");
	return 0;
}

alphaOffset returnValues(alphaOffset set)
{
	alphaOffset temp;
	string characterExemption = "\nERROR: This is a thrown exemption for improper character input\n\nYou must enter a letter of the alphabet as a start key\n\n\nPROGRAM SELF DESTRUCTING....................AAAAAHHHHHHHHHHHHHHHH";

	string integerException = "\nERROR: This is a thrown exception for improper offset input\n\nYou must enter an offset number that doesn't extend beyond the maximum allowed by an alphabet comprised of 26 letters\n\n\nPROGRAM SELF DESTRUCTING....................AAAAAHHHHHHHHHHHHHHHH";

	if (!isalpha(set.start))
	{
		throw characterExemption;
	}

	if (isupper(set.start))
	{
		if ((int(set.start) + set.alphaoffset) < 65 || (int(set.start) + set.alphaoffset) > 90)
		{
			throw integerException;
		}
		else
		{
			temp.start = static_cast<char>((int(set.start) + set.alphaoffset));
			return temp;
		}

	}
	else if ((int(set.start) + set.alphaoffset) < 97 || (int(set.start) + set.alphaoffset) > 122)
	{
		throw integerException;
	}
	else
	{
		temp.start = static_cast<char>((int(set.start) + set.alphaoffset));
		return temp;
	}
}

