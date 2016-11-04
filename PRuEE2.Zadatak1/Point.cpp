#include "Point.h"

Point::Point()
{
}

Point::~Point()
{
}

Point::Point(int x, int y, int z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

int Point::GetX() {
	return x;
}

int Point::GetY() {
	return y;
}

int Point::GetZ() {
	return z;
}


