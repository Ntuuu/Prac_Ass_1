#include "RectangleFactory.h"
#include "Rectangle.h"

Shape* RectangleFactory::createShape(int l, int w, std::string c, int posx, int posy, std::string text) const {
    return new Rectangle(l, w, c, posx, posy);
}

void RectangleFactory::toString() const {
    std::cout << "RectangleFactory" << std::endl;
}
