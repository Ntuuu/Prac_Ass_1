#include "Square.h"

Square::Square(int side, std::string c, int posx, int posy)
    : Shape(side, side, c, posx, posy) {
        this->length = side;
        this->width = side;
        this->color = c;
        this->position_x = posx;
        this->position_y = posy;
}

std::vector<std::string> Square::draw() const {
        std::vector<std::string> buffer(width, std::string(width, '-'));
        return buffer;
    }

std::string Square::toString() const {
    return "Square";
}