#pragma once
#include "Nord.h"
#include "Location.h"
#include "Stack.h"
class List : public Nord
{
private:
	Nord* head;
	Nord* newNord;
public:
	List(Nord* _head);
	List();
	~List();
	Nord* gethead();
	void sethead(Nord* _head);
	void insertNord(Location p);
	void printList();
};

