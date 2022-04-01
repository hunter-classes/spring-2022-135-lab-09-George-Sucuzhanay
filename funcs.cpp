#include <iostream>
#include "coord3d.h"

#include "funcs.h"

#include <cmath>
// add functions here

double length(Coord3D* p)
{
	Coord3D h = *p;
	return sqrt(pow(h.x, 2) + pow(h.y, 2) + pow(h.z, 2));
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2)
{
	Coord3D one = *p1, two = *p2;
	return (length(&one) > length(&two) ? p1 : p2);
}
void move(Coord3D *ppos, Coord3D *pvel, double dt)
{
	(*ppos).x += (*pvel).x * dt;
	(*ppos).y += (*pvel).y * dt;
	(*ppos).z += (*pvel).z * dt;
}
double fixLength(double l, int precision)
{
	double p = pow(10, precision);
	return ((int)(l*p)) / p;
}
