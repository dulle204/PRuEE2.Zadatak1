#pragma once
class Point
{
public:
	Point();
	Point(int x, int y, int z);
	~Point();

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