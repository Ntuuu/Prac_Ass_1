#include "Rectangle.h"

Rectangle::Rectangle(int l, int w, std::string c, int posx, int posy)
    : Shape(l, w, c, posx, posy) {
        this->length = l;
        this->width = w;
        this->color = c;
        this->position_x = posx;
        this->position_y = posy;
}
std::vector<std::string> Rectangle::draw() const {
    // if (this->color == "red") {
    //     std::vector<std::string> buffer(width, std::string(length, '-'));
    //     return buffer;
    // } else if (this->color == "blue") {
    //     std::vector<std::string> buffer(width, std::string(length, '-'));
    //     return buffer;
    // }
    std::vector<std::string> buffer(width, std::string(length, '#'));
    return buffer;
}