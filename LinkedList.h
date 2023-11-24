#pragma once

#include "Classes.h"

using namespace std;

// LINKED LIST  
class LinkedList
{
	Node* head;

public:
	// Default constructor
	LinkedList();

	// Read
	void read(string& newLastName, string& newName, int* ci, int* day, int* month, int* year);

	// Val Position
	int valPos(int n);

	// Validate list
	int valList();

	// Store attributes inside temp variables
	void copyVariables(Node* node, string& newLastName, string& newName, int* ci, int* day, int* month, int* year);

	// Store the data inside node attributes
	void copyPerson(Node* node, string& lastName, string& name, int ci, int day, int month, int year);

	// Sort List
	void sortList();

	// Fill person
	void fillPerson(Node* node);

	// Add person
	void addPerson();

	// Search person
	void searchPerson(string& str);

	// Search menu
	void searchMenu();

	// Show linked list
	void showList();

	// Show individual node
	void showPerson(Node* p, int val, int i);

	// Modify person
	void modifyPerson(int pos);

	// Remove person
	void removePerson(int pos);
};
