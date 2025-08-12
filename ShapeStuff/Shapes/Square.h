#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"


class Square : public Shape {
    public:
        Square(int side, std::string c, int posx, int posy);
        std::vector<std::string> draw() const override;
        std::string toString() const override;
        Square* clone() const {
            return new Square(*this);
        }
};

#endif // SQUARE_H