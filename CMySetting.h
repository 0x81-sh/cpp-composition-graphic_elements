#pragma once
#include <ostream>

enum COLOR {
    BLACK,
    RED,
    GREEN,
    BLUE,
    WHITE
};

enum STYLE {
    SOLID,
    DOTTED,
    DASHED,
    DASH_DOTTED
};

class CMySetting {
    private:
        COLOR color;
        STYLE style;
        bool fill;
    public:
        CMySetting(COLOR color, STYLE style, bool fill);
        ~CMySetting();
        COLOR getColor() const;
        void setColor(COLOR color);
        STYLE getStyle() const;
        void setStyle(STYLE style);
        bool isFill() const;
        void setFill(bool fill);
        friend std::ostream &operator<<(std::ostream &os, const CMySetting &setting);
};
