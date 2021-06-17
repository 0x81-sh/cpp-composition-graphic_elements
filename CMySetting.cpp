#include "CMySetting.h"
#include "output.h"

CMySetting::CMySetting(COLOR color, STYLE style, bool fill) : color(color), style(style), fill(fill) {
    constrHead();
    std::cout << *this;
}

CMySetting::~CMySetting() {
    destrHead();
    std::cout << *this;
}

COLOR CMySetting::getColor() const {
    return color;
}

void CMySetting::setColor(COLOR color) {
    this->color = color;
}

STYLE CMySetting::getStyle() const {
    return style;
}

void CMySetting::setStyle(STYLE style) {
    this->style = style;
}

bool CMySetting::isFill() const {
    return fill;
}

void CMySetting::setFill(bool fill) {
    this->fill = fill;
}

std::ostream &operator<<(std::ostream &os, const CMySetting &setting) {
    os << "<CSetting color:" << setting.color << " style:" << setting.style << " fill:" << setting.fill << ">";
    return os;
}
