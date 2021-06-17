#include "CMyRectangle.h"
#include "output.h"

CMyRectangle::CMyRectangle(const CMyPoint &corner1, const CMyPoint &corner2, const CMySetting &sett)
                           : corner1(corner1), corner2(corner2), sett(sett) {
    constrHead();
    std::cout << *this;
}

CMyRectangle::CMyRectangle(int x1, int y1, int x2, int y2, const CMySetting &sett) : corner1(x1, y1), corner2(x2, y2), sett(sett) {
    constrHead();
    std::cout << *this;
}

CMyRectangle::~CMyRectangle() {
    destrHead();
    std::cout << *this;
}

const CMyPoint &CMyRectangle::getCorner1() const {
    return corner1;
}

void CMyRectangle::setCorner1(const CMyPoint &corner1) {
    this->corner1 = corner1;
}

const CMyPoint &CMyRectangle::getCorner2() const {
    return corner2;
}

void CMyRectangle::setCorner2(const CMyPoint &corner2) {
    this->corner2 = corner2;
}

const CMySetting &CMyRectangle::getSett() const {
    return sett;
}

std::ostream &operator<<(std::ostream &os, const CMyRectangle &rectangle) {
    os << "<CRectangle corner1:" << rectangle.corner1 << " corner2:" << rectangle.corner2 << " sett:" << rectangle.sett << ">";
    return os;
}
