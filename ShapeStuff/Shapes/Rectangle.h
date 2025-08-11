#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"


class Rectangle : public Shape {
    public:
        Rectangle(int l, int w, std::string c, int posx, int posy);
        std::vector<std::string> draw() const override;
        // void draw(std::vector<std::string> &buffer) const override;
        Rectangle* clone() const {
            return new Rectangle(*this);
        }
};

#endif // RECTANGLE_H