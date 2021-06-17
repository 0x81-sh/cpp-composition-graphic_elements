#include "CMyCircle.h"
#include "output.h"

CMyCircle::CMyCircle(const CMyPoint &center, float rad, const CMySetting &sett) : center(center), rad(rad), sett(sett) {
    constrHead();
    std::cout << *this;
}

CMyCircle::CMyCircle(int x, int y, float rad, const CMySetting &sett) : center(x, y), rad(rad), sett(sett) {
    constrHead();
    std::cout << *this;
}

CMyCircle::~CMyCircle() {
    destrHead();
    std::cout << *this;
}

const CMyPoint &CMyCircle::getCenter() const {
    return center;
}

void CMyCircle::setCenter(const CMyPoint &center) {
    this->center = center;
}

float CMyCircle::getRad() const {
    return rad;
}

void CMyCircle::setRad(float rad) {
    this->rad = rad;
}

const CMySetting &CMyCircle::getSett() const {
    return sett;
}

std::ostream &operator<<(std::ostream &os, const CMyCircle &circle) {
    os << "<CCircle center:" << circle.center << " rad:" << circle.rad << " sett:" << circle.sett << ">";
    return os;
}
