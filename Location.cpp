#include "Location.h"
Location::Location(int _x, int _y)
{
	setx(_x);
	sety(_y);
}
Location::Location()
{
	setx(0);
	sety(0);
}
int Location::getx()
{
	return this->x;
}
int Location::gety()
{
	return this->y;
}
void Location::setx(int _x)
{
	this->x = _x;
}
void Location::sety(int _y)
{
	this->y = _y;
}
