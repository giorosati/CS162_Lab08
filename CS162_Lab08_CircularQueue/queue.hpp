/*********************************************************************
** Program Filename: queue.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-28
** Description: Queue class header file CS199_400 Lab 8
*********************************************************************/

#ifndef QUEUE_HPP
#define QUEUE_HPP

#include "queueNode.hpp"


class Queue
{
private:
	queueNode* front;		 // first item in the queue, where you take off
	queueNode* back;		// last item in the queue, where you add to

public:
	Queue();				//default constructor
	~Queue();				//deconstructor
	void addBack(int);		// puts on item at the end of the structure and
							// creates a new node if the queue is full
	int getFront();			// returns the value at the front of the structure
	void removeFront();		// removes the first item in the structure
	void displayQueue();	// outputs the queue to the console
};
#endif
