#include "CMyPoint.h"
#include "output.h"

CMyPoint::CMyPoint(int x, int y) : x(x), y(y) {
    constrHead();
    std::cout << *this;
}

CMyPoint::CMyPoint(const CMyPoint &ref) : x(ref.x), y(ref.y) {
    constrHead();
    std::cout << *this;
}

CMyPoint::~CMyPoint() {
    destrHead();
    std::cout << *this;
}

int CMyPoint::getX() const {
    return x;
}

void CMyPoint::setX(int x) {
    this->x = x;
}

int CMyPoint::getY() const {
    return y;
}

void CMyPoint::setY(int y) {
    this->y = y;
}

std::ostream &operator<<(std::ostream &os, const CMyPoint &point) {
    os << "<CPoint x:" << point.x << " y:" << point.y << ">";
    return os;
}


