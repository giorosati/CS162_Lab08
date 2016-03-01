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
	front->setNext(back);
	front->setPrev(back);
	back->setNext(front);
	back->setPrev(front);
}

Queue::~Queue()				//deconstructor
{}

void Queue::addBack(int intIn)	//add value to end of queue
{
	//if an empty queue
	if (front->getValue() == -1)
	{
		front->setValue(intIn);
	}

	//if an empty back node
	else if (back->getValue() == -1)
	{
		back->setValue(intIn);
	}
	//add a new node to the back
	else
	{
		queueNode* newNode = new queueNode;
		newNode->setValue(intIn);
		newNode->setPrev(back);				//set newNode's back pointer to back
		newNode->setNext(back->getNext());	//move back's next pointer to temp next
		back->setNext(newNode);				//change back's next to newNode
		back = newNode;
	}
}

int Queue::getFront()		//returns the value at the front of the structure or -1 if queue is empty
{
	if (front->getValue() == -1)
	{
		cout << "Error. The queue is empty." << endl;
		cout << endl;
	}
	else
	{
		cout << "Value at Front is: " << front->getValue();
		cout << endl;
	}
	return front->getValue();
}

int Queue::removeFront()	// places -1 into the value of front, advances front to the next node if it wasn't empty
{
	int temp = front->getValue();
	if (temp == -1)
	{
		cout << "Error. The queue is empty." << endl;
		cout << endl;
	}
	else
	{
		front->setValue(-1);	//replace value with -1
		if (front->getNext() != back)
		{
			front = front->getNext();	//advace front to next node
		}
		else if (back->getValue() != -1)	//back is next, back has data
		{
			front->setValue(back->getValue());	//move back data to front
			back->setValue(-1);					//set back data to -1
		}
	}
	return temp;
}

void Queue::displayQueue()	// outputs the queue to the console
{
	cout << "Current Queue elements and values:" << endl;
	cout << "*****************************************" << endl;
	if (front->getValue() == -1)
	{
		cout << "The queue is empty." << endl;
		cout << endl;
	}
	else  //where this a value at the top of the queue
	{
		queueNode* tempNode = front;
		int position = 0;
		if (tempNode->getValue() != -1)		//output front if it has a value
		{
			position += 1;
			cout << "Position: " << position << "  Value: " << tempNode->getValue() << endl;
		}
		while (tempNode->getNext() != front)
		{
			tempNode = tempNode->getNext();
			if (tempNode->getValue() != -1)
			{
				position += 1;
				cout << "Position: " << position << "  Value: " << tempNode->getValue() << endl;
			}
		}
	}
	cout << "*****************************************" << endl;
	cout << endl;
}