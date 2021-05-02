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
	alphaOffset setReturned;

	string error = "\n\nTry again: ";

	
	cout << "\n\nEnter start key: ";
	cin >> set.start;

	cout << "\n\nEnter a number to offset (the alphabet is comprised of 26 letters, if you choose an offset which falls outside of what is allowed, I will throw an exception): ";
	cin >> set.alphaoffset;

	/*try
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
	}*/

	cout << "\n\nHere is what you entered:\n\n\nStart: " << set.start << "\t\t" << "Offset: " << set.alphaoffset << endl;

	cout << "\n\nCalling the function: \n";

	/*setReturned = returnValues(set);*/

	try
	{
		setReturned = returnValues(set);
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
		}

	}
}


//char character(char start)
//{
//	string characterExemption = "\nERROR: This is a thrown exemption for improper character input\n\nYou must enter a letter of the alphabet as a start key\n\n\nPROGRAM SELF DESTRUCTING....................AAAAAHHHHHHHHHHHHHHHH";
//	string exceptionString = "\nERROR: must enter a letter of the alphabet.";
//	
//		if (isalpha(start))
//		{
//			return start;
//		}
//		else
//		{
//			throw characterExemption;
//		}
//}
//
//int offset(int offset)
//{
//	
//	string integerException = "\nERROR: This is a thrown exception for improper offset input\n\nYou must enter an offset number that doesn't extend beyond the maximum allowed by an alphabet comprised of 26 letters\n\n\nPROGRAM SELF DESTRUCTING....................AAAAAHHHHHHHHHHHHHHHH";
//	
//
//	if (offset < 26)
//	{
//		return offset;
//	}
//	else
//	{
//		throw integerException;
//	}
//
//}
