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

std::string Shape::getColor() const {
    return this->color;
}

int Shape::getPositionX() const {
    return this->position_x;
}

int Shape::getPositionY() const {
    return this->position_y;
}

void Shape::setLength(int l) {
    this->length = l;
}

void Shape::setWidth(int w) {
    this->width = w;
}

void Shape::setColor(std::string c) {
    this->color = c;
}

void Shape::setPosition(int x, int y) {
    this->position_x = x;
    this->position_y = y;
}

// void Shape::toString() const {
//     std::cout << "this is  a"
// }