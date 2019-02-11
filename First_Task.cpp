// First_Task.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

//frame forming function
void nameFraming(string lines[], string& name)
{
	//fill first and last lines with asterisks
	for (int i = 0; i < 2 + 12 + name.length(); i++)
	{
		lines[0] += '*';
		lines[4] += '*';
	}
	
	//second and pre-last line fill
	lines[1] += '*';
	lines[3] += '*';
	for (int i = 0; i < 12 + name.length(); i++)
	{
		lines[1] += ' ';
		lines[3] += ' ';
	}
	lines[1] += '*';
	lines[3] += '*';

	//middle line fill
	lines[2] += "* Sveikas, " + name + "! *";
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
