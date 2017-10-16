// ifict.cpp

#include "ifict.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// Room class definitions

Room::Room()
{
	qty++;
}

Room::Room(const Room &classCopy)
{

	qty++;
}

Room::~Room()
{
	qty--;
}

int Room::getQty() const
{
	return qty;
}

string Room::getName() const
{
	return roomName;
}

string Room::getSDesc() const
{
	return sdesc;
}

string Room::getLDesc() const
{
	return ldesc;
}

bool Room::getVerbose() const
{
	return verbose;
}
void Room::setName(string name)
{
	roomName = name;
}

void Room::setSDesc(string desc)
{
	sdesc = desc;
}

void Room::setLDesc(string desc)
{
	ldesc = desc;
}

int Room::qty = 0;
//bool Room::verbose = true;


// pc class definitions

Character::Character()
{
	qty++;
}

Character::Character(const Character &classCopy)
{
	qty++;
}

Character::~Character()
{
	qty--;
}

int Character::getQty() const
{
	return qty;
}

string Character::getName() const
{
	return name;
}

string Character::getSDesc() const
{
	return sdesc;
}

string Character::getLDesc() const
{
	return ldesc;
}

string Character::getLocation() const
{
	return currentLocation;
}

void Character::setName(string name)
{
	name = name;
}

void Character::setSDesc(string desc)
{
	sdesc = desc;
}

void Character::setLDesc(string desc)
{
	ldesc = desc;
}

void Character::setLocation(string room)
{
	currentLocation = room;
}

int Character::qty = 0;

