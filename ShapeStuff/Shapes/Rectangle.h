#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape {
    private:
        int length;
        int width;
        std::string color;
        int position_x;
        int position_y;

    public:
        Shape* clone() const {
            return new Rectangle(*this);
        }
};

#endif // TEXTBOX_H