// main.cpp
#include "ifict.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void toLower(string &str);

int main()
{
	Room currentRoom, livingRoom, kitchen, hallway, bathroom, bedroom1, bedroom2;
	Character user;
	string command = "default";

	livingRoom.setName("Living Room");
	livingRoom.setSDesc("A common room for lounging and socializing.");
	livingRoom.setLDesc("Where familes and friends tend to gather and spend time together.");
	currentRoom = livingRoom;
	user.setLocation("livingRoom");

	do
	{
		cout << currentRoom.getName() << endl;
		if (currentRoom.getVerbose())
			cout << currentRoom.getLDesc() << endl;
		else
			cout <<  currentRoom.getSDesc() << endl;
		cout << ": ";
		cin >> command;
		toLower(command);

		cout << "You entered " << command << endl;
	}
	while(command != "quit");

}

void toLower(string &str)
{
	for(int i = 0; str[i]; i++)
		str[i] = tolower(str[i]);
}
