#include "triangle.h"

double Triangle::_getDistance(Point* a, Point* b){
    return sqrt(pow(a->getX() - b->getX(), 2) + pow(a->getY() - b->getY(), 2) + pow(a->getZ() - b->getZ(), 2));
}

double Triangle::getArea(){
    double ab_dist = _getDistance(_a, _b)
        , bc_dist = _getDistance(_b, _c)
        , ac_dist = _getDistance(_a, _c)
        , p;
    p = (ab_dist + bc_dist + ac_dist) / 2;

    return sqrt( p * (p - ab_dist) * (p - bc_dist) * (p - ac_dist));
}
