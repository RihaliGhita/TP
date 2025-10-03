#include "Point.h"
#include <iostream>
#include<math.h>
using namespace std;

Point::Point(float x, float y)
{
	this->x = x;
	this->y = y;
}

float Point::dist(Point p)
{
	
	return sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
}

void Point::afficher()
{
	cout << "(" << x << ", " << y << ")" << endl;
}
