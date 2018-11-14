#include "point.h"

point::point(int x, int y) 
{
	this->x = x;
	this->y = y;
}

bool point::operator==(const point& other) 
{
	if (this->x == other.x && this->y == other.y)
		return 1;

	return 0;
}

bool point::operator!=(const point& other) 
{
	return !(this == &other);
}

bool point::operator<(const point& other) 
{
	if (this->x < other.x)
		return true;
	else if (this->y < other.y)
		return true;

	return false;
}