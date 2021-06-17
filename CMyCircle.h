#pragma once
#include <ostream>
#include "CMyPoint.h"
#include "CMySetting.h"

class CMyCircle {
    private:
        CMyPoint center;
        float rad;
        const CMySetting &sett;
    public:
        CMyCircle(const CMyPoint &center, float rad, const CMySetting &sett);
        CMyCircle(int x, int y, float rad, const CMySetting &sett);
        ~CMyCircle();
        const CMyPoint &getCenter() const;
        void setCenter(const CMyPoint &center);
        float getRad() const;
        void setRad(float rad);
        const CMySetting &getSett() const;
        friend std::ostream &operator<<(std::ostream &os, const CMyCircle &circle);
};
