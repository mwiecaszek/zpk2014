
#ifndef __POINT_H__
#define __POINT_H__
#include<iostream>
#include<math.h>
using namespace std;
class Point
{
double x, y, z;
public:
Point();
Point(double, double, double);
~Point();
void setX(double);
void setY(double);
void setZ(double);
double getX();
double getY();
double getZ();
};
ostream& operator<<(ostream &, Point);
#endif
