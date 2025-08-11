#include "Shape.h"

Shape::Shape(int l, int w, std::string c, int posx, int posy) {
    this->length = l;
    this->width = w;
    this->color = c;
    this->position_x = posx;
    this->position_y = posy;
}

int Shape::getHeight() const {
    return this->width;
}

int Shape::getLength() const {
    return this->length;
}