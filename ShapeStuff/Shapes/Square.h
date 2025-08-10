#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"

class Square : public Shape {
    private:
        int length;
        int width;
        std::string color;
        int position_x;
        int position_y;

    public:
        Shape* clone() const {
            return new Square(*this);
        }
};

#endif // TEXTBOX_H