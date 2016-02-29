/*********************************************************************
** Program Filename: queueNode.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-29
** Description: double linked node struct header file CS162_400 Lab 8 project
*********************************************************************/

#ifndef QUEUENODE_HPP
#define QUEUENODE_HPP

struct queueNode
{
private:

	int value;
	queueNode* prev;
	queueNode* next;

public:
	queueNode();				//constructor
	~queueNode();				//destructor
	void setPrev(queueNode*);	//sets prev pointer
	void setNext(queueNode*);	//sets next pointer
	queueNode* getPrev();		//gets prev pointer
	queueNode* getNext();		//gets next pointer
	void setValue(int);			//sets value
	int getValue();				//gets value
};

#endif
