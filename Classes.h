#pragma once

#include <iostream>

using namespace std;

// BIRTHDATE
class BirthDate
{
public:
	int day, month, year;

	BirthDate();
	BirthDate(int d, int m, int y);
	void setDate(int d, int m, int y);
};

// NODE
class Node
{
public:
	Node* prev;

	string lastName, name;
	int ci;
	class BirthDate date;

	Node* link;

	Node();

	Node(string lN, string n, int ci, int d, int m, int y);
};

