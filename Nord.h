#pragma once
#include "Location.h"
class Nord
{
private:
	Location point;
	Nord* pointer;
public:
	Nord();
	Nord(Location _point, Nord* _pointer);
	Nord(Location _point);
	Location getpoint();
	Nord* getpointer();
	void setpoint(Location _point);
	void setpointer(Nord* _pointer);

};

