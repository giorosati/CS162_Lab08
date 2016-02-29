/*********************************************************************
** Program Filename: queue.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-29
** Description: Queue class implementation file CS199_400 Lab 8
*********************************************************************/


//includes
#include "queue.hpp"
#include "queueNode.hpp"
#include <iostream>

using std::cout;
using std::endl;

Queue::Queue()				//default constructor
{
	front = new queueNode;
	back = new queueNode;
	front->prev = back;
	front->next = back;
	back->prev = front;
	back->next = front;
}

Queue::~Queue()				//deconstructor
{}

void Queue::addBack(int)	//add value to end of queue
{
	cout << "addback" << endl;
}

int Queue::getFront()		//returns the value at the front of the structure
{
	cout << "getFront" << endl;
}

void Queue::removeFront()	// removes the first item in the structure
{
	cout << "removeFront" << endl;
}

void Queue::displayQueue()	// outputs the queue to the console
{
	cout << "displayQueue" << endl;
}