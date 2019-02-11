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
	//if name's last letter is 's' or 'S', the person is male
	if (name[name.length() - 1] == 's' || name[name.length() - 1] == 'S')
		return true;
	return false;
}

//frame forming function
void printNameFraming(string& name, int frame)
{
	int space_fill_amount = 11;
	
	//begin of 'middle line fill'
	bool is_man = isMan(name);
	if (is_man == true)
		space_fill_amount = 12;

	//begin of 'print first line with asterisks'
	cout << "\n";
	for (int i = 0; i < space_fill_amount + 2*frame + name.length(); i++)
		cout << '*';
	cout << "\n";
	//end of 'print first line with asterisks'
	
	//begin of 'print filling lines'
	for (int i = 0; i < frame; i++)
	{
		cout << '*';
		for (int j = 0; j < -2 + space_fill_amount + 2*frame + name.length(); j++)
			cout << ' ';
		cout << "*\n";
	}
	//end of 'print filling lines'

	//begin of 'print middle line'
	//if man
	if (is_man == true)
	{
		cout << '*';
		for (int i = 0; i < frame; i++)
			cout << ' ';
		cout << "Sveikas, " << name << "!";
		for (int i = 0; i < frame; i++)
			cout << " ";
		cout << "*\n";
	}
	
	//if not a man
	else
	{
		cout << '*';
		for (int i = 0; i < frame; i++)
			cout << ' ';
		cout << "Sveika, " << name << "!";
		for (int i = 0; i < frame; i++)
			cout << " ";
		cout << "*\n";
	}
	//end of 'print middle line'

	//begin of 'print filling lines'
	for (int i = 0; i < frame; i++)
	{
		cout << '*';
		for (int j = 0; j < -2 + space_fill_amount + 2 * frame + name.length(); j++)
			cout << ' ';
		cout << "*\n";
	}
	//end of 'print filling lines'

	//begin of 'print last line with asterisks'
	for (int i = 0; i < space_fill_amount + 2 * frame + name.length(); i++)
		cout << '*';
	cout << "\n";
	//end of 'print last line with asterisks'
}

int main()
{
	//variables
	string name;
	int frame_size = 0;

	//input
	cout << "Iveskite savo varda: ";
	cin >> name;
	while (frame_size < 1 || frame_size > 10)
	{
		cout << "Iveskite remelio dydi (nuo 1 iki 10): ";
		cin >> frame_size;
	}

	printNameFraming(name, frame_size);	//form frame

}
