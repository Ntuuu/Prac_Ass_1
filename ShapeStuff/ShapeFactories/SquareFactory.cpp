#include "SquareFactory.h"

Shape* SquareFactory::createShape(int side, int side2, std::string color, int posx, int posy, std::string text) const {
    return new Square(side, color, posx, posy);
}

void SquareFactory::toString() const {
    std::cout << "SquareFactory: Creating a square shape." << std::endl;
}
