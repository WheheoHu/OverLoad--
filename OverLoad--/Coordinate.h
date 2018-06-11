#pragma once
#ifndef COORDINATE_H
#define COORDINATE_H


class Coordinate
{
public:
	Coordinate();
	Coordinate(int x, int y);
	~Coordinate();
	void setX(int x);
	void setY(int y);
	Coordinate &operator--();
	Coordinate &operator--(int);
	void printCoor();
private:
	int iX_;
	int iY_;
};

#endif // !COORDINATE_H