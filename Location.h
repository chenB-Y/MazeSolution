#pragma once
#include <iostream>
using namespace std;
class Location
{
private :
	int x;
	int y;
public:
	Location(int _x, int _y);
	Location();
	int getx();
	int gety();
	void setx(int _x);
	void sety(int _y);
};

