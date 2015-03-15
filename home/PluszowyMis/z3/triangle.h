#include "point.h"

using namespace std;

class Triangle{
private:
    Point* _a;
    Point* _b;
    Point* _c;
    double _getDistance(Point* a, Point* b);

public:
    Triangle(Point* a, Point* b, Point* c) : _a{a}, _b{b}, _c{c}{};
    double getArea();

    ~Triangle(){};
};
