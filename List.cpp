#include "List.h"
List::List(Nord* _head)
{
	sethead(_head);
}
List::List()
{
	sethead(nullptr);
}
List::~List()
{
	delete newNord;
}
Nord* List::gethead()
{
	return this->head;
}
void List:: sethead(Nord* _head)
{
	this->head = _head;
}
void List:: insertNord(Location p)
{
	this->newNord = new Nord;
	this->newNord->setpoint(p);
	if (head == nullptr)
	{
		head = this->newNord;
		return;
	}
	else
	{
		Nord* temp = head;
		while (temp->getpointer() != nullptr)
			temp = temp->getpointer();
		temp->setpointer(newNord);
	}
}
void List::printList()
{
	Nord* temp = head;

	if (head == nullptr)
	{
		cout << "List empty" << endl;
		return;
	}

	while (temp != nullptr) 
	{
		cout << "(" << temp->getpoint().getx()<< "," << temp->getpoint().gety() << ")" << endl;
		temp = temp->getpointer();
	}
}
