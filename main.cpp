#include <iostream>
#include "CMyRectangle.h"
#include "CMyCircle.h"

int main() {
    CMySetting blueSolid(BLUE, SOLID, true);
    CMySetting redDotted(RED, DOTTED, false);

    CMyPoint p1(10,10);
    CMyCircle c1(0, 0, 5.6, blueSolid);
    CMyCircle c2(p1, 10.5, blueSolid);

    CMyPoint p2(50,50);
    CMyPoint p3(100, 100);
    CMyRectangle r1(3, 4, 7, 8, redDotted);
    CMyRectangle r2(p2, p3, blueSolid);

    std::cout << std::endl << "Circle1: " << c1;
    std::cout << std::endl << "Circle2: " << c2;
    std::cout << std::endl << "Rectangle1: " << r1;
    std::cout << std::endl << "Rectangle2: " << r2;

    return 0;
}
