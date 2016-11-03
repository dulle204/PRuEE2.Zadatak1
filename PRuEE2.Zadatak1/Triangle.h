#pragma once
#include "Point.h"
class Triangle
{
public:
	Triangle();
	~Triangle();
	bool Check();
	double GetArea();
	double GetSumOfSides();
	int GetSide_a();
	int GetSide_b();
	int GetSide_c();
private:
	Point A;
	Point B;
	Point C;
};

Triangle::Triangle()
{
}

Triangle::~Triangle()
{
}