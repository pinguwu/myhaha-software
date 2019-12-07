#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>

using namespace std;

void scroll (string input)
{
	for (int i = 0; i++; i < input.length())
	{
		cout << input[i];
		system("sleep 0.3");
	}
	cout << endl;
	return;
}

char options ()
{	
	system("clear");
	cout << "[1] - Obtain Random Reaction" << endl;
	cout << "[2] - User Help" << endl;
	cout << endl;
	cout << "Please select an option: ";
	char input;
	cin >> input;
	cout << "You selected " << input << "." << endl; 
	return(input);
}

string reaction ()
{
	string reactions[17] = {"lol", "xd", "funny", "haha", "cool", "cool beans", "bruh", "lmao", "BAHAHAHA", "ight", "<o/", "yes", "bet", "k", "lmaoo", "lmfao", "Ok Boomer"};
	srand(time(NULL));
	int RandIndex = rand() % 17;
	return(reactions[RandIndex]);
}

int main()
{
	cout << "Thank you for using MyHaha Sofware for your reaction needs!" << endl;
	cin.get();
	
	char optionsResult = options();

	if (optionsResult == '1')
	{
		cout << "Obtaining random reaction" << endl;	
		string output = reaction();
		cout << output << endl;
	}
	else if (optionsResult == '2')
	{
		scroll("You have chosen to recieve user help.");		
	}
	else
	{
		scroll("Invalid selection!");		
	}
	
	cout << "Thank you for using MyHaha! Proccess terminated." << endl;	
}
