#pragma once
#include <ostream>

class CMyPoint {
    private:
        int x;
        int y;
    public:
        CMyPoint(int x, int y);
        CMyPoint(const CMyPoint &ref);
        ~CMyPoint();
        int getX() const;
        void setX(int x);
        int getY() const;
        void setY(int y);
        friend std::ostream &operator<<(std::ostream &os, const CMyPoint &point);
};
