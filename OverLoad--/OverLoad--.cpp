// OverLoad--.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Coordinate.h"
#include <iostream>
using namespace std;

int main()
{
	Coordinate coor(2,3);
	--coor;
	coor.printCoor();
	coor--;
	coor.printCoor();
	system("pause");
    return 0;
}

