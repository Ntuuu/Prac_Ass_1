#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"


class Square : public Shape {
    public:
        Square(int side, std::string c, int posx, int posy);

        Shape* clone() const {
            return new Square(*this);
        }
};

#endif // SQUARE_H