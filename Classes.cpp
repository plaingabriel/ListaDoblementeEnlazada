#include "Classes.h"

// BIRTHDATE CONSTRUCTOR
BirthDate::BirthDate()
{
	day = 0;
	month = 0;
	year = 0;
}

// BIRTHDATE PARAM CONSTRUCTOR
BirthDate::BirthDate(int d, int m, int y)
{
	this->day = d;
	this->month = m;
	this->year = y;
}

// BIRTHDAY SET DATE
void BirthDate::setDate(int d, int m, int y)
{
	this->day = d;
	this->month = m;
	this->year = y;
}

// NODE CONSTRUCTOR
Node::Node()
{
	prev = NULL;
	lastName = "";
	name = "";
	ci = 0;
	date = BirthDate();
	link = NULL;
}

// NODE PARAM CONSTRUCTOR
Node::Node(string lN, string n, int ci, int d, int m, int y)
{
	this->prev = NULL;
	this->lastName = lN;
	this->name = n;
	this->ci = ci;
	this->date = BirthDate(d, m, y);
	this->link = NULL;
}

// SET PREV NODE
void Node::setPrev(Node* n)
{
	this->prev = n;
}
