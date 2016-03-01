/*********************************************************************
** Program Filename: queueNode.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-29
** Description: double linked struct implementation file CS162_400 Lab 8
*********************************************************************/

//includes
#include "queueNode.hpp"
#include <cstdlib>
#include <iostream>

//usings
using std::cout;
using std::endl;
using std::cin;


queueNode::queueNode()		//constructor
{
	value = -1;
}

queueNode::~queueNode()		//destructor
{

}

void queueNode::setPrev(queueNode* nodeIn)	//sets prev pointer
{
	prev = nodeIn;
}

void queueNode::setNext(queueNode* nodeIn)	//sets next pointer
{
	next = nodeIn;
}

queueNode* queueNode::getPrev()		//gets prev pointer
{
	return  prev;
}

queueNode* queueNode::getNext()		//gets next pointer
{
	return next;
}

void queueNode::setValue(int intIn)		//sets value
{
	value = intIn;
}

int queueNode::getValue()				//gets value
{
	return value;
}