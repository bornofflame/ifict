// ifict.h

#ifndef IFICT_H
#define IFICT_H

#include <string>

using std::string;

class Room
{
private:
	static int qty;
	string roomName, sdesc, ldesc;
	bool verbose = true;
	//const string exits[] = {"north","south","east","west"};
public:
	Room();
	Room(const Room &classCopy);
	~Room();

	int getQty() const;
	string getName() const;
	string getSDesc() const;
	string getLDesc() const;
	bool getVerbose() const;
	void setName(string name);
	void setSDesc(string desc);
	void setLDesc(string desc);
};

class Character
{
private:
	static int qty;
	string currentLocation;
	string name;
	string sdesc;
	string ldesc;
public:
	Character();
	Character(const Character &classCopy);
	~Character();

	string getName() const;
	int getQty() const;
	string getSDesc() const;
	string getLDesc() const;
	string getLocation() const;
	void setName(string name);
	void setSDesc(string desc);
	void setLDesc(string desc);
	void setLocation(string room);
};

#endif
