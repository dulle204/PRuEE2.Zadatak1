#pragma once
class Point
{
public:
	Point();
	Point(int x, int y, int z);
	~Point();
	int GetX();
	int GetY();
	int GetZ();
private:
	int x;
	int y;
	int z;
};

Point::Point()
{
}

Point::~Point()
{
}