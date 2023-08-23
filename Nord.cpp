#include "Nord.h"
Nord::Nord(Location _point, Nord* _pointer)
{
	setpoint(_point);
	setpointer(_pointer);
}
Nord::Nord()
{
	this->point.setx(0);
	this->point.sety(0);
	setpointer(nullptr);
}
Nord::Nord(Location _point)
{
	setpoint(_point);
	setpointer(nullptr);
}
Location Nord::getpoint()
{
	return this->point;
}
Nord* Nord::getpointer()
{
	return this->pointer;
}
void Nord::setpoint(Location _point)
{
	this->point.setx(_point.getx());
	this->point.sety(_point.gety());
}
void Nord::setpointer(Nord* _pointer)
{
	this->pointer = _pointer;
}
