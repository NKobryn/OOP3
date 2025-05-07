#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>

struct Point {
    double x, y;
};

struct Triangle {
    Point A, B, C;

    double area() const;
    bool contains(const Point &P) const;
    bool isDegenerate() const;
    bool isOnEdge(const Point &P) const;
    bool containsByCross(const Point &P) const;
};

double distance(const Point &p1, const Point &p2);
double heronArea(const Triangle &t);
double crossProduct(const Point &A, const Point &B, const Point &P);
void showMenu();

#endif