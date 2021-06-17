#pragma once
#include <ostream>
#include "CMyPoint.h"
#include "CMySetting.h"

class CMyRectangle {
    private:
        CMyPoint corner1;
        CMyPoint corner2;
        const CMySetting &sett;
    public:
        CMyRectangle(const CMyPoint &corner1, const CMyPoint &corner2, const CMySetting &sett);
        CMyRectangle(int x1, int y1, int x2, int y2, const CMySetting &sett);
        ~CMyRectangle();
        const CMyPoint &getCorner1() const;
        void setCorner1(const CMyPoint &corner1);
        const CMyPoint &getCorner2() const;
        void setCorner2(const CMyPoint &corner2);
        const CMySetting &getSett() const;
        friend std::ostream &operator<<(std::ostream &os, const CMyRectangle &rectangle);
};

