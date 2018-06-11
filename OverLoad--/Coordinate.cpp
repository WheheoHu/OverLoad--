#include "stdafx.h"
#include "Coordinate.h"
#include <iostream>
using namespace std;
Coordinate::Coordinate()
{
}

Coordinate::Coordinate(int x, int y):iX_(x),iY_(y)
{
}


Coordinate::~Coordinate()
{
}

void Coordinate::setX(int x)
{
	iX_ = x;
}

void Coordinate::setY(int y)
{
	iY_ = y;
}

Coordinate &Coordinate::operator--()
{
	this->iX_--;
	this->iY_--;
	return *this;
}

Coordinate &Coordinate::operator--(int)
{
	this->iX_--;
	this->iY_--;
	return *this;
}

void Coordinate::printCoor()
{
	cout << iX_ << "," << iY_ << endl;
}
