/*********************************************************************
** Program Filename: main.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-29
** Description: File with main() for CS199_400 Lab 8
*********************************************************************/

#include <iostream>
#include <cstdlib>

#include "queue.hpp"
#include "queueNode.hpp"

using std::cout;
using std::cin;
using std::endl;


void displayMenu();
int getInput();

int main() {
	Queue myQueue;
	bool done = false;
	int choice = 0;

	while (done != true) {
		displayMenu();
		choice = getInput();
		switch (choice) {
		case 1:
			int intIn;
			cout << "Enter an integer: ";
			cin.ignore();
			cin >> intIn;
			myQueue.addBack(intIn);
			break;
		case 2:
			myQueue.getFront();
			break;
		case 3:
			myQueue.removeFront();
			break;
		case 4:
			myQueue.displayQueue();
			break;
		case 5:
			done = true;
			break;
		default:
			std::cout << "Not a valid choice" << std::endl;
			break;
		}
	}
}


void displayMenu() {
	std::cout << std::endl;
	std::cout << "What would you like to do?" << std::endl;
	std::cout << "*************************" << std::endl;
	std::cout << "  1) Enter a value" << std::endl;
	std::cout << "  2) Display first value" << std::endl;
	std::cout << "  3) Remove a value" << std::endl;
	std::cout << "  4) Display the queue contents" << std::endl;
	std::cout << "  5) Exit" << std::endl;
	std::cout << std::endl;


}

int getInput() {
	int choice;
	std::cout << "Choice: ";
	std::cin >> choice;
	return choice;
}





















“a) Enter a value”,
“b) Display first value”,
“c) Remove a value”,
“d) Display the queue contents”, and
“x) Exit”