#include "Square.h"

Square::Square(int side, std::string c, int posx, int posy)
    : Shape(side, side, c, posx, posy) {
        this->length = side;
        this->width = side;
        this->color = c;
        this->position_x = posx;
        this->position_y = posy;
}
