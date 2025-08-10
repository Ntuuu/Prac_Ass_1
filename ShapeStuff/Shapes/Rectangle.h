#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"


class Rectangle : public Shape {
    public:
        Rectangle(int l, int w, std::string c, int posx, int posy);

        Shape* clone() const {
            return new Rectangle(*this);
        }
};

#endif // RECTANGLE_H