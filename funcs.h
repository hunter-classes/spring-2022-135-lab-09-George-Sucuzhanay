#include "coord3d.h"

#pragma once

double length(Coord3D* p);
Coord3D* fartherFromOrigin(Coord3D* p1, Coord3D* p2);

void move(Coord3D *ppos, Coord3D *pvel, double dt);
double fixLength(double l, int precision);
Coord3D* createCoord3D(double x, double y, double z);
void deleteCoord3D(Coord3D *p);


