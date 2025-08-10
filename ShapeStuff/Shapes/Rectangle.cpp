#include "Rectangle.h"

Rectangle::Rectangle(int l, int w, std::string c, int posx, int posy)
    : Shape(l, w, c, posx, posy) {
        this->length = l;
        this->width = w;
        this->color = c;
        this->position_x = posx;
        this->position_y = posy;
}
