// First_Task.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

//function returns true if a given name (in string format) is a man
bool isMan(string name)
{
	//cout << "!!!!!!!!!!!!!" << name[name.length() - 1] << "\n";
	if (name[name.length() - 1] == 's' || name[name.length() - 1] == 'S')
		return true;
	return false;
}

//frame forming function
void nameFraming(string lines[], string& name)
{
	int space_fill_amount = 11;
	
	//begin of 'middle line fill'
	bool is_man = isMan(name);
	if (is_man == true)
	{
		lines[2] += "* Sveikas, " + name + "! *";
		space_fill_amount = 12;
	}
	else
		lines[2] += "* Sveika, " + name + "! *";
	//end of 'middle line fill'

	//begin of 'fill first and last lines with asterisks'
	for (int i = 0; i < 2 + space_fill_amount + name.length(); i++)
	{
		lines[0] += '*';
		lines[4] += '*';
	}
	//end of 'fill first and last lines with asterisks'
	
	//begin of 'second and pre-last line fill'
	lines[1] += '*';
	lines[3] += '*';
	for (int i = 0; i < space_fill_amount + name.length(); i++)
	{
		lines[1] += ' ';
		lines[3] += ' ';
	}
	lines[1] += '*';
	lines[3] += '*';
	//end of 'second and pre-last line fill'


}

//frame printing function
void print(string lines[])
{
	for (int i = 0; i < 5; i++)
		cout << lines[i] << "\n";	//print each line
}

int main()
{
	//variables
	string lines[5], name;

	//input
	cout << "Iveskite savo varda: ";
	cin >> name;

	nameFraming(lines, name);	//form frame
	print(lines);	//print the frame

}
