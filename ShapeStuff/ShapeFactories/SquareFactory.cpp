#include "SquareFactory.h"

Shape* SquareFactory::createShape(int side, std::string color, int posx, int posy) {
    return new Square(side, color, posx, posy);
}

void SquareFactory::toString() {
    std::cout << "SquareFactory: Creating a square shape." << std::endl;
}
